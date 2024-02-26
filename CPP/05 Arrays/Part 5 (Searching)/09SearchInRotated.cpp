#include<iostream>
#include<vector>
using namespace std;


int binarySrch(vector<int> &nums ,int target,int start,int end){

    while(start<=end){
        int mid = start+(end-start)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
}


int findPivot(vector<int> nums){
    int low=0;
    int high =nums.size()-1;
    while(low<high){
        int mid = low+(high-low)/2;

        if(mid+1<nums.size() && nums[mid]>nums[mid+1]){
            return mid;
        }
        if(mid-1>=0 && nums[mid-1]>nums[mid]){
            return mid-1;
        }

        if(nums[low] >= nums[mid]){
            high = mid-1;
        }
        else{
            low = mid;
        }
    }
    return low;
}

int search(vector<int>& nums , int target){
    int pivotindex = findPivot(nums);
    if(target>nums[0] && target<= nums[pivotindex]){
        //search in array a
        int ans = binarySrch(nums,target,0,pivotindex);
        return ans;
    }
    if( pivotindex+1<nums.size() && target >=nums[pivotindex+1] && target <= nums[nums.size()-1]){
         int ans = binarySrch(nums,target,pivotindex+1,nums.size()-1);
         return ans;
    }
    return -1;
}


int main(){
    
    vector<int> arr{3,4,5,6,7,1,2};
    cout<<search(arr,2);
    



    return 0;
}