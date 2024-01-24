#include<iostream>
using namespace std;

float kelvinfunc(float t){
    float ans= t+275.15;
    return ans;
}

float farenhitefunc(float t){
    float ans = (t*1.80)+32;
}
int main(){
 float temperature;
 cout<<"Enter temperature in celcius";
 cin>>temperature;

 cout<<"Temperatue in kelvin is :"<<kelvinfunc(temperature);
 cout<<"Temperature in farenhite is :"<<farenhitefunc(temperature);
 
 return 0;
}