#include<iostream>
using namespace std;

int findRes(int divident,int divisor){
    int s=0;
    int e = abs(divident);
    int ans=0;

    while(s<=e){
        int mid = s+(e-e)/2;
        if(abs(mid*divisor)==abs(divident)){
          return mid;
        }
        if(abs(mid*divisor)>abs(divident)){
            e = mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    if((divisor<0 && divident<0)|| (divisor>0 && divident>0)){
     return ans;
    }
    else{
        return -ans;
    }
}

int main(){
 int dividend =21;
 int divisor = 7;

 int result = findRes(dividend,divisor);
 cout<<result;

 
 
 return 0;
}