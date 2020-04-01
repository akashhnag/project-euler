/*Even fibonacci*/
#include<iostream>
using namespace std;
int main(){
    long a=0;
    long b=1;
    long tmp=0;
    long sum=0;
    for(long i=0;i<4000000;i++){
        tmp=a+b;
        // cout<<tmp<<endl;
        if((tmp%2)==0){
            sum+=tmp;
        }
        
        a=b;
        b=tmp;
    }
    cout<<sum;
}