//Factorial digit sum
#include<iostream>

using namespace std;
int main(){
    int n=100;
    double pro=1;
    int sum=0;
    double digit=0;
    for(int i=n;i>=1;i--){
        pro*=i;
    }
    while(pro>0){
        digit=((int)pro)%10;
        cout<<"digit"<<digit<<endl;
        sum+=digit;
        pro=((int)pro)/10;
    }
    //cout<<pro;
}