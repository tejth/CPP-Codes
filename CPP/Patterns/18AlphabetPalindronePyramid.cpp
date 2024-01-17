#include<iostream>
using namespace std;
int main(){
 
  int n;
  cin>>n;

    //for numbers
    // for(int row=0;row<n;row++){
    //     int col;
    //     for(col=0;col<row+1;col++){
    //            //1st part
    //            cout<<col+1;
    //     }
    //     col=col-1;
    //     //reverse Counting
    //     for(;col>=1;col=col-1){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

     //for alphabets
     for(int row=0;row<n;row++){
        int col;
        for(col=0;col<row+1;col++){
               //1st part
               int ans=col+1;
               char c = ans+'A'-1;
               cout<<c;
        }
        col=col-1;
        //reverse Counting
        for(;col>=1;col=col-1){
            int ans =col;
            char ch = ans+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }


  
 return 0;
}