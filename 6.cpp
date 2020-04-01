//Sum square difference

#include<iostream>
using namespace std;

int sumOfSquares(){
    int sum=0;
    for(int i=1;i<=100;i++){
        sum+=i*i;
    }
    cout<<sum<<endl;
    return sum;
}

int squareOfSums(){
    int sum=0;
    for(int i=1;i<=100;i++){
        sum+=i;
    }
    cout<<sum*sum<<endl;
    return sum*sum;
}

int main(){
    cout<<squareOfSums()-sumOfSquares()<<endl;
}