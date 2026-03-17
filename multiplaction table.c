#include<stdio.h>
int main(){
    int n;
    int num;
    printf("enter a table no :");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        num=n*i;
        printf("%d\n",num);
    }
    return 0;
}
