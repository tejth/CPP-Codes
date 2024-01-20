#include<iostream>
using namespace std;

void func(int n){
    for(int i=2;i<=n;i=i+2){
        cout<<i<<endl;
    }
}
int main(){
 
 int n;
 cout<<"Enter a number";
 cin>>n;
 func(n);



 return 0;
}