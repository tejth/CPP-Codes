#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[],int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
 int arr[]={3,2,4,9,2,10};
 int size=6;
 cout<<"Maximum number is: "<<findMax(arr,size);

 
 
 return 0;
}