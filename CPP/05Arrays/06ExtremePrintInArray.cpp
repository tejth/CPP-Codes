#include<iostream>
using namespace std;
int main(){
 int arr[]={2,3,4,5,6,7,8};
 int size=7;
 int leftpointer=0;
 int rightpointer = size-1;



   while(leftpointer<=rightpointer){
    if(leftpointer>rightpointer)
        break;
    
    if(leftpointer==rightpointer){
        cout<<arr[leftpointer]<<" ";
    }

    else{
          cout<<arr[leftpointer]<<" ";
          cout<<arr[rightpointer]<<" ";
    }
        
        leftpointer++;
        rightpointer--;
    
   }
 
 return 0;
}