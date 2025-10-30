#include<stdio.h>
int main(){
    int n;scanf("%d",&n);
    int fib[n];
    fib[0]=0;fib[1]=1;    
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("Fibonacci Sequence: ");
    for(int i=0;i<n;i++){
        printf("%d ",fib[i]);
    }
    printf("\n");
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + fib[i];
    }
    printf("The sum of series is %d",sum);
    return 0;
}
