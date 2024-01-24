#include<iostream>
using namespace std;

void countFunc(int arr[],int size){
    int oneCount=0;
    int zeroCount=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zeroCount++;
        }
        if(arr[i]==1){
            oneCount++;
        }
    }
    cout<<"Number of zeros are: "<<zeroCount<<endl;
    cout<<"Number of ones are: "<<oneCount<<endl;
}
int main(){
 
 int arr[]={0,0,1,0,1,1,1,0,0};
 int size =9;

countFunc(arr,size);
 
 return 0;
}