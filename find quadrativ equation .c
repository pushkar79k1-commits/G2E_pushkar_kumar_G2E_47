#include<stdio.h>
#include<math.h>
int main(){
float A,B,C,d,root1,root2;
int type;
    printf("enter a caficent of A B C  : ");
    scanf("%d %d %d ",&A,&B,&C);
     d= (B*B)-(4*A*C);
    if(d>0)//real and distent
        type=1;
        else if(d==0)//real and equal
        type=2;
        else{
            type= 3;//imagnary root
        }
        switch(type){
            case 1:
            root1=(-B+sqrt(d)/2*A);
            root2=(-B-sqrt(d)/2*A);
            printf("root are real and distinct :\n");
            printf("root1=%.2f,root2=%.2f",root1,root2);
            break;
            case 2:
            root1=((-B)/2*A);
            printf("root are real and equal :\n");
            printf("root1=root2 %.2f",root1);
            break;
            case 3:
           int a=(-B/(2*A)); int b=sqrt(-d)/(2*A);
            printf("root are imaginary :\n");
            printf("root1=%.2f+%.2fi\n",a,b);
            break;
            default :
            printf("invlid input!");
        }
        return 0;
}