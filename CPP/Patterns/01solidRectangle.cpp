#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter rows";
    cin>>rows;
    int columns;
    cout<<"Enter columns";
    cin>>columns;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}