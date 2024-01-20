#include<iostream>
using namespace std;

float func(int r){
    return 2*3.14*r;
}


int main(){
  int r;
  cout<<"Enter a radius";
  cin>>r;
  cout<<func(r);
 
 return 0;
}