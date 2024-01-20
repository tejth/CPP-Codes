#include<iostream>
using namespace std;

void countFunc(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}

int main(){
 int n;
 cout<<"Enter limit";
 cin>>n;

 countFunc(n);
 
 return 0;
}