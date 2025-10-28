#include<stdio.h>
#include<math.h>
int len(int n){
    int count=0;
    for(int i=0;n>0;i++){
        n=n/10;
        count++;
    }
    return count;
}
int reverse(int n){
    
    int rev=0;
    int last;
    for(int i=0;n>0;i++){
        last=n%10;
        n=n/10;
        rev=(10*rev)+last;
    }
  
    return rev;
}
int armstrong(int n){
    int dup=n;
    int sum=0;
    for(int i=0;n>0;i++){
        int ld;
        ld=n%10;
        sum=sum+pow(ld,len(dup));
        n=n/10;
    }
    return sum;
}
int max(int a,int b){
    if(a>b){
        return a;
    }
    else return b;
}
int gcd(int s,int t){
    while(s>0&&t>0){
        if(s>t) s=s%t;
        else t=t%s;
    }
    if(s==0) return t;
    else return s;
}

int main(){
    int a = gcd(5,10);
    printf("%d",a);
}