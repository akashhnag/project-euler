//Number letter counts ///output not coming
#include<iostream>
#include<string>
using namespace std;

int countLetters(string a){
    int sumOfEachString=0;
    int totalSum=0;
    for(int i=0;i<a.length();i++){
        sumOfEachString++;
    }
    return sumOfEachString;
}

int main(){
    string singleDigits[9]={"one","two","three","four","five","six","seven","eight","nine"};
    string tenToNineteen[9]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen"
    ,"eighteen","ninteen"};
    string divisibleByTen[9]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    double totalSum=0;
    string numbers="";
    for(int n=1;n<=1000;n++){
        if(n<10){
        for(int i=1;i<10;i++){
            if(n==i){
                totalSum+=countLetters(singleDigits[i-1]);
                break;
            }
        }
    }else if(n>10 && n<20){
        int lastDigit=0;
        for(;n>10;n/=10){
            lastDigit=n%10;
            totalSum+=countLetters(tenToNineteen[lastDigit-1]);            
        }
    }else if((n%10)==0 && n<100){
        totalSum+=countLetters(divisibleByTen[(n/10)-1]);
    }else if(n>20 && n<100){
        int onesPlace=n%10;
        int tensPlace=n/10;
        numbers=divisibleByTen[tensPlace-1]+singleDigits[onesPlace-1];
        totalSum+=countLetters(numbers);
    }else if(n>99 && n<1000){
        if((n%10)==0){
            if((n/10)==10){
                numbers="onehundred";
                totalSum+=countLetters(numbers);
            }else{
                int firstTwoDigits=n/10;
                int tensPlace=firstTwoDigits%10;
                int hundredsPlace=firstTwoDigits/10;
                numbers=singleDigits[hundredsPlace-1]+"hundredand"+divisibleByTen[tensPlace-1];
                totalSum+=countLetters(numbers);
            }
        }else{
            int lastTwoDigits=n%100;
            int firstTwoDigits=n/10;
            int hundredsPlace=firstTwoDigits/10;
            int onesPlace=n%10;
            if(lastTwoDigits>10 && lastTwoDigits<20){
               // cout<<singleDigits[hundredsPlace-1]<<" hundred and "<<tenToNineteen[onesPlace-1];    
               numbers=singleDigits[hundredsPlace-1]+"hundredand"+tenToNineteen[onesPlace-1];
               totalSum+=countLetters(numbers);           
            }else{
                int tensPlace=firstTwoDigits%10;
                //cout<<singleDigits[hundredsPlace-1]<<" hundred and "<<divisibleByTen[tensPlace-1]<<" "
                //<<singleDigits[onesPlace-1]; 
                numbers=singleDigits[hundredsPlace-1]+"hundredand"+divisibleByTen[tensPlace-1]
                +singleDigits[onesPlace-1];
                totalSum+=countLetters(numbers);           
            }            
        }
    }else{
        cout<<"number should be 3 digits only..";
    
    }
    }
    cout<<totalSum;
    
}