#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of rows";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i==0||i==n-1||j==i||j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

// alternate solution

//  for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             // if(i==0||i==n-1||j==i||j==n-1){
//             //     cout<<"*";
//             // }
//             if(i==0||j==0||j==n-i-1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }