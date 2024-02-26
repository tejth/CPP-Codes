#include<iostream>
using namespace std;

int fsqrt(int n){
    int target= n;
    int low=0;
    int high= n;
    int ans=-1;
    while(low<high){
        int mid = low+(high-low)/2;
        if(mid*mid ==target){
            return mid;
        }
        else if(mid*mid >target){
            high=mid-1;
        }
        else{
            ans=mid;
            low=mid+1;

        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int result = fsqrt(n);
    cout<<result;
    
    int precision;
    cout<<"Enter precision value"<<endl;
    cin>>precision;



    double step = 0.1;
    double finalAns = result;
    for(int i=0;i<precision;i++){

        for(double j=finalAns; j*j<=n;j=j+step){
            finalAns = j;
        }
        step = step/10;
    }
    cout<<"Final ans is: " << finalAns<<endl;
}