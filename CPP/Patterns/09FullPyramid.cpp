#include<iostream>
using namespace std;

int main(){
  int n;  
  cin>>n;
  for(int i=0;i<n;i++){
    int k=0;
    for(int j=0;j<(2*n-1);j++){
        //space
         if(j<n-i-1){
            cout<<" ";
         }
         //stars
         else if(k<(2*i+1)){
          if(k==0||k==2*i ||i==n-1){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
            k++;
         }
        //space
        else cout<<" ";
           
    }
    cout<<endl;
  }
}


//  for(int i=0;i<n;i++){
//     for(int j=0;j<(2*n-1);j++){
           
//     }
// This loop will print 6*7 grid }