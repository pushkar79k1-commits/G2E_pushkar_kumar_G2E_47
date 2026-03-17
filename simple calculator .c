#include<stdio.h>
int main(){
    char operator;
    int n1,n2,result;
    printf("enter an operator(+,-,*,/): ");
    scanf("%c",&operator);
    printf("enter first  number : ");
        scanf("%d/n",&n1);
        printf("enter second number: ");
        scanf("%d",&n2);
            switch(operator){
                case '+' :
                result =n1+n2;
                printf("the sum  two no : %d",result);
                break;
                case  '-' :
                result =n2-n1; 
                printf("the sub of two no : %d",result);
                break;
                case '*' :
                result =n1*n2;
                printf("the multiply of two no %d ",result);
                break;
                case '/' :
                result =n2/n1;
                printf("the divide of two no %d",result);
                break;
                default :
                printf("enter a operator is invalid");
            }
        }

