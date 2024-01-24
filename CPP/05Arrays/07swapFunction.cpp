#include<iostream>
using namespace std;

void swapFunc1(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

}
void swapfunc2(int &a,int &b){
    a = a ^ b;
    b = a^b;
    a=a^b;
}
void swapVariables(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}
int main(){
 int a;
 cout<<"Enter first number: "<<endl;
 cin>>a;
 int b;
 cout<<"Enter second number: "<<endl;
 cin>>b;

 swapFunc1(a,b);
 cout<<a<<" "<<b;
 return 0;
}