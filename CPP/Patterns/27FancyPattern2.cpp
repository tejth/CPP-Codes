#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<c;
                c++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

   int start=c-n;
    for(int i=0;i<n;i++){
        int k=start;
        for(int j=0;j<2*n-2*i-1;j++){
            if(j%2==0){
                cout<<k;
                k++;
            }
            else{
                cout<<"*";
            }
        }
            start= start-(n-i-1);

        cout<<endl;
    }

    return 0;
}