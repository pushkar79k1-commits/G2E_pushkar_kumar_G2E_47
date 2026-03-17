#include<stdio.h>
int main(){
    int n; 
    printf("enter a number : ");
    scanf("%d",&n);
    if(n>0){
        printf("enter a number is postive ");
    }
    else if(n<0){
        printf("enter a number is negtive ");
    }
    else {
        printf("a number is neither negtive nor positive ");
    }
    return 0;
}