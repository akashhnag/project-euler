let n=100;let pro=1
for(let i=n;i>=1;i--){
    pro*=i;
}
let digit=0;
let sum=0;
while(pro>0){
    digit=pro%10;
    
    sum+=digit;
    pro=pro/10;
}
console.log(sum);



