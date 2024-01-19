#include<iostream>
using namespace std;
int main(){
 
 int n;
 cin>>n;
  for(int row=0;row<n;row++){
    //spaces
   for(int col=0;col<n-row-1;col++){
        cout<<"  ";
    }
    //numbers
    for(int col=0;col<row+1;col++){
      cout<<col+1<<" ";
    }
    //numbers
    int start=row;
    for(int col=0;col<row;col++){
        cout<<start<<" ";
        start--;
    }
    cout<<endl;
  }
 
 return 0;
}