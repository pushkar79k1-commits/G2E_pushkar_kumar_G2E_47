#include<stdio.h>
int main(){
    int n;
    printf("enter a factorial of a number : ");
    scanf("%d",&n);
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*(p-1);
    printf("%d",p);
    }
}