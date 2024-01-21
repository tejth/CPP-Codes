#include<iostream>
using namespace std;

void func1(int n){

    while(n>0){
        int ans = n%10;
        cout<<ans<<" ";
        n=n/10;
    }
}

int main(){
 int n;
 cout<<"Enter a number"<<endl;
 cin>>n;

 func1(n);

 
 return 0;
}