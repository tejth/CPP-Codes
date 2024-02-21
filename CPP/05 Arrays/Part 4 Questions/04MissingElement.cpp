#include<iostream>
#include<vector>
using namespace std;

int missFunc(vector<int> &nums){
    for(int i=0;i<nums.size();i++){
        int index = abs(nums[i]);
        if(nums[index-1]>0){
            nums[index-1]*=-1;
        }
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            return i+1;
        }
    }
    return -1;
}

//method 2

int findMiss2(vector<int> &nums){
    int i = 0;
    while (i < nums.size()){
        int index = nums[i] - 1;
        if (nums[i] != nums[index]){
            swap(nums[i], nums[index]);
        } else {
            i++;
        }
    }
    for (int i = 0; i < nums.size() ; i++){
        if (nums[i] != i + 1){
            return i + 1;
        }
    }
    return -1;
}


int main(){
  vector<int> nums{1,3,5,3,4};
//   cout<< missFunc(nums)<<endl;
  cout<<findMiss2(nums);
 return 0;
}