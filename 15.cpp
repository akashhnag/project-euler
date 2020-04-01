//Power digit sum
#include<iostream>
#include<cmath>
using namespace std;

void sumOfDigits(double n){
    double d=1;
    for(double i=n;i>0;i/=10){
        d=i%10;
        cout<<d<<" ";
    }
}

int main(){
    double n=pow(2,15);
    sumOfDigits(n);
}