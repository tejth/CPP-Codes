#include<iostream>
using namespace std;
int main(){
 

 int n;
 cout<<"Enter a number"<<endl;
 cin>>n;
 int m;
 cout<<"Enter another number"<<endl;
 cin>>m;


cout<<(n & m)<<endl;
cout<<(n | m)<<endl;
cout<<( ~n)<<" "<<(~m)<<endl;
cout<<(n xor m)<<endl;
cout<<(n<<1)<<endl;
cout<<(5>>1)<<endl;
 
 return 0;
}