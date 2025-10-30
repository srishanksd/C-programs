#include<stdio.h>
int main(){
    int n;
    int arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp++;
            }
        }
        if(temp==n-1-i){
            printf("%d",arr[i]);
        }
    }
    return 0;
}