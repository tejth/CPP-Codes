#include<iostream>
using namespace std;

void inputFunc(int arr[],int size){
    cout<<"Enter Elements"<<endl;;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void outputFunc(int arr[],int size){
    cout<<"Elemnts are:"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
 
 int arr[500];
 int n;
 cout<<"Enter number of elements to input: ";
 cin>>n;

 inputFunc(arr,n);
 outputFunc(arr,n);
 
 return 0;
}