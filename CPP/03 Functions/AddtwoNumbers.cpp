#include<iostream>
using namespace std;

int add(int a, int b);

int main(){
 int n;
 cout<<"Enter a number";
 cin>>n;
 int m;
 cout<<"Enter another Number";
 cin>>m;
 cout<<add(n,m);

 return 0;
}
int add(int a,int b){
    int sum=a+b;
    return sum;
}