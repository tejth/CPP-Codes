#include<iostream>
#include<limits.h>
using namespace std;

int findMin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
 int arr[]={3,2,4,9,8,1};
 int size=6;
 cout<<"Minimum number is: "<<findMin(arr,size);

 
 
 return 0;
}