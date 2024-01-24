#include<iostream>
#include<math.h>
using namespace std;

int convertFunc(int n){

   int i=0;
   int binaryno=0;
   while(n>0){
      int remainder = n&1;
      binaryno=remainder*pow(10,i++)+binaryno;
      n=n>>1; 
 }
 return binaryno;

}


int main(){
 int n;
 cin>>n;
 
 cout<<convertFunc(n);
 return 0;
 
 return 0;
}