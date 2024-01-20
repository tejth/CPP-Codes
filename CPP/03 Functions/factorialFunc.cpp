#include<iostream>
using namespace std;

int factFunc(int n){
    int fact=1;
    if(n==0||n==1){
        return 1;
    }
    else{
        for(int i=1;i<=n;i++ ){
            fact=fact*i;
        }
    }
    return fact;
}

int main(){
 int n;
 cout<<"Enter a number";
 cin>>n;

cout<<factFunc(n);

 return 0;
}