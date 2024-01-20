#include<iostream>
using namespace std;

void chkFunc(int n){
    if(n%2==0){
        cout<<"even";

    }
    else{
        cout<<"odd";
    }
}

int main(){
  int n;
  cout<<"Enter a number to check";
  cin>>n;

 return 0;
}