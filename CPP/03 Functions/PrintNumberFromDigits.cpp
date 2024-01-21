#include<iostream>
using namespace std;
int main(){
 
 int num[] ={2,3,4};
 int ans=0;
 for(int i=0;i<3;i++){
     ans = ans*10+num[i];

 }
 cout<<ans<<endl;


 
 
 return 0;
}