#include<iostream>
#include<vector>
using namespace std;

int findFunc(vector<int> v , int target){
    int s=0;
    int e = v.size()-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(v[mid]==target)
          return mid;
        if(mid-1 >=0 && v[mid-1]==target)
          return mid-1;
        if(mid+1 < v.size() && v[mid+1]==target)
          return mid+1;
        
        if(v[mid]<target){
            s=mid+2;
        }
        else{
            e=mid-2;
        }
        
        
    }
    return -1;

    
}

int main(){

    vector<int> v ={10,3,40,20,50,80,70};
    int ans = findFunc(v,3);
    cout<<ans;
    return 0;
}