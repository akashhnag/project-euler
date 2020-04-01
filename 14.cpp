//Longest Collatz sequence
#include<iostream>
using namespace std;

int countCollatz(int n){
    int count=1;
    while (n>1)
    {
        count++;
        if((n%2)==0){
            n/=2;
        }else{
            n=(3*n)+1;
        }        
    }
    return count;
}

int main(){
    int n=1;
    int a=1000000;
    int max=0;int number=0;
    while(n<=a){
        int collatzCount=countCollatz(n); 
        if(collatzCount>max){
            max=collatzCount;
            number=n;
        }
        n++;
    }
    cout<<max<<" "<<number;
     
}