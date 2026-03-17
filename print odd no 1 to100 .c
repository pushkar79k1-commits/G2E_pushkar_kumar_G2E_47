#include<stdio.h>
int main(){
    int n,sum=0;
    for(int i=0;i<=100;i+=2){
        sum+=i;
        printf("%d ",i);
    }
    printf("\n%d",sum);
}