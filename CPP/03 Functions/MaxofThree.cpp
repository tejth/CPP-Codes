#include<iostream>
using namespace std;

void maxFunc(int a,int b,int c){
    if(a>b&&a>c){
        cout<<a<<" "<<"a is greatest";
    }
    else if(b>a && b>c){
        cout<< b<< " "<<"b is greatest";
    }
    else{
        cout<<c<<" "<<"c is greatest";
    }
}

int main(){
 int n;
 cout<<"Enter a number";
 cin>>n;
 int m;
 cout<<"Enter another Number";
 cin>>m;
 int o;
 cout<<"Enter another number";
 cin>>o;

 maxFunc(n,m,o);

 return 0;
}