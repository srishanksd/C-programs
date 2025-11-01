#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int temp=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                temp++;
            }                          
        }
        if(temp==2){
            int rev=0;
            int num =i;
            for(;num>0;num/=10){
                int ld=num%10;
                rev=(rev*10)+ld;
            }
            if(rev==i){
                printf("%d ",i);
            }
        }
    }
    return 0;
}