//10001st prime

#include<iostream>
using namespace std;

bool checkPrime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        //cout<<n;
        return true;
    }else
    {
        return false;
    }
    
}

int main(){
    int count=1;
    int n=2;
    while (count<6)
    {
        if(checkPrime(n)){
            count++;
        }
        n++;       
        cout<<count<<n<<endl;
    }
    //
    
}