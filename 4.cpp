//Largest palindrome product
#include<iostream>
using namespace std;

bool checkPallindrome(int n){
    int rev=0;
    int dig=0;
    for(int i=n;i>0;i/=10){
        dig=i%10;
        rev=(rev*10)+dig;        
    }
    if(rev==n){
        return true;
    }else{
        return false;
    }
}

int main(){
    int max=0;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            int num=i*j;
            if(checkPallindrome(num)){
                if(num>max){
                    max=num;
                }
            }
        }
    }
    cout<<max;
}

