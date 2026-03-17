#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter a number A : ");
    scanf("%d",&a);
    printf("enter a number B : ");
    scanf("%d",&b);
    printf("enter a number c : ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("the gratest number is a:%d");
    }
    if(b>c && b>a){
        printf("the gratest number is b:%d");
    }
    if(c>a && c>b){
        printf("the gratest number is c:%d");
    }
}