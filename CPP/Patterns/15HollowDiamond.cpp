#include<iostream>
using namespace std;
int main(){
    
   int n;
   cin>>n;

   for(int row=0;row<n;row++){
      //spaces
      for(int col=0;col<n-row-1;col++){
        cout<<" ";
      } 
      //characters
      for(int col=0;col<2*row+1;col++){
        //if(first character and last character)
        if(col==0){
            //first character
            cout<<"*";
        }
        else if(col==2*row){
            //last character
            cout<<"*";
        }
        //else space
        else{ 
            cout<<" ";
         }
      }
      cout<<endl;
   }


   //second part

    for(int row=0;row<n;row++){
        //spaces
        for(int col=0;col<row;col++){
            cout<<" ";
        }

        //star
        for(int col=0;col<2*n-2*row-1;col=col+1){
            //if first or last character
             if(col==0){
            //first character
            cout<<"*";
              }
            else if(col==2*n-2*row-2){
                //last character
                cout<<"*";
            }
            //else space
            else{ 
                cout<<" ";
            }
        }
        cout<<endl;
      }
   return 0;
}
