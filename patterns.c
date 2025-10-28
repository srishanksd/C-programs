#include<stdio.h>
#include<math.h>
void pattern1(int n){

    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=0;j<=n-i;j++){
            printf(" ");
        }
        for(int k=0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern2(int n){
    int start =0;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else start =0;
        for(int j=0;j<=i;j++){
            printf("%d ",start);
            start = 1-start;
        }
        
        printf("\n");
    }
}
void pattern3(int n){
    int s=(2*n-2);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=0;k<s;k++){
            printf(" ");
        }
        s=s-2;

        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}
void pattern4(int n){
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",num);
            num = num+1;
        }
        printf("\n");
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        int n=65;
        for(int j=0;j<=i;j++){
            printf("%c",n);
            n++;
        }
        printf("\n");
    }
}
void pattern6(int n){
    for(int i=65;i<n+65;i++){
        for(int j=65;j<=i;j++){
            printf("%c",i);
        }

        printf("\n");
    }
}
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int s=0;s<n-i-1;s++){
            printf(" ");
        }

        int v=65;
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            printf("%c",v);
            if(j<=breakpoint) v++;
            else v--;
        }

        for(int s=0;s<n-i-1;s++){
            printf(" ");
        }
        printf("\n");
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=(64+n-i);j<=(64+n);j++){
            printf("%c",j);
        }
        printf("\n");
    }
}
void pattern9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int s=0;s<(2*n-2)-(2*i);s++){
            printf(" ");
        }

        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
void pattern10(int n){
    int spaces=2*(n-1);
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        for(int j=1;j<=spaces;j++){
            printf(" ");
        }
        for(int j=1;j<=stars;j++){
            printf("*");
        }
        printf("\n");
        if(i<n) spaces-=2;
        else spaces+=2;
    }
}
void pattern11(int n){
    for(int i =0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int min(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
void pattern12(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int bottom=2*n-2-i;
            int right=2*n-2-j;
            printf("%d ",n-min(min(top,bottom),min(left,right)));
        }
        printf("\n");
    }
}
int main(){
    pattern12(3);
    return 0;
}