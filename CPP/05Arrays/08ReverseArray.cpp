#include<iostream>
using namespace std;
int main(){
 
 int arr[]={20,30,40,50,60};
 int size=5;
 int leftpointer=0;
 int rightpointer = size-1;

 while(leftpointer<=rightpointer){
       swap(arr[leftpointer],arr[rightpointer]);     
        leftpointer++;
        rightpointer--;
    
   }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   
 
 return 0;
}