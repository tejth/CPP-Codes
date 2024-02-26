#include<iostream>
#include<vector>
using namespace std;

bool binSrch(int arr[4][4],int rows,int cols, int target){
    int low =0;
    int high =rows*cols -1;

    while(low<=high){
        int mid = low+(high-low)/2;
        int rowindex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowindex][colIndex]==target){
            cout<<"Found at "<<rowindex << colIndex <<endl;
            return true;
        }
        else if(arr[rowindex][colIndex]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    } 
    return false;

}

int main(){

    int arr[4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int rows=4;
    int cols=4;
    int target = 12;

    int result=binSrch(arr,rows,cols,target);
    
    if(result){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}