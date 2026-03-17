#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int main(){
    int a;
    printf("enter a first number :");
    scanf("%d",&a);
    int b;
    printf("enter a second no : ");
    scanf("%d",&b);
    int sum =add(a,b);
    printf("the sum of two no %d",sum);
    return 0;
}