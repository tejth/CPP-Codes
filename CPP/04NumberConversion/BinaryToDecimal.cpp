#include<iostream>
#include<math.h>
using namespace std;

int convertFunc(int n){

  int i=0;
  int decimal =0;
    while(n){
        int bit = n%10;
        decimal = decimal + bit * pow(2,i++);
        n /=10;
    }
    return decimal;
  }

int main(){
 
 int n;
 cin>>n;

 cout<<convertFunc(n);
 return 0;
}