#include<iostream>
using namespace std;
int main(){
 
 int n;
 cin>>n;

 for(int row=0;row<n;row++){
    int start = row+1;
    //spaces
    for(int col=0;col<n-row-1;col++){
        cout<<" ";
    }
    //numbers
    for(int col=0;col<row+1;col++){
        cout<<start;
        start = start+1;
    }


    //reverse counting
    int start1=2*row;
    for(int col=0;col<row;col++){
        cout<<start1;
        start1--;
    }

    cout<<endl;
 }
 return 0;
}