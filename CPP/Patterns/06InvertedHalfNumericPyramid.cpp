#include<iostream>
using namespace std;
int main(){

      int n;
      cin>>n;
      for(int i=0;i<n;i++){
        int k=1;
        for(int j=i;j<n;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
      }
      return 0;
}