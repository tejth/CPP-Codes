#include<iostream>
using namespace std;
int countsetbit(int n){
 
 int count=0;
 while(n>0){
    if(n&1==1){
        count++;
    }
    n=n>>1;
}
return count;
}

int main(){
    int n;
    cin>>n;

    cout<<countsetbit(n);
 
 
 return 0;
}