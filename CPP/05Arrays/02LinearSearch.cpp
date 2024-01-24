#include<iostream>
using namespace std;
bool srchFunc(int arr[],int size, int element){
    for(int i=0;i<size;i++){
           if(arr[i]==element){
            return true;
           }
    }
    return false;
}
int main(){
 int arr[]={2,3,4,5,6,7};
 int size=6;
 int n;
 cout<<"Enter the element that you want to search: "<<endl;
 cin>>n;
 
 if(srchFunc(arr,size,n)){
    cout<<"Elemnt found";
 }
 else{
    cout<<"Element not found"<<endl;
 }

 
 return 0;
}