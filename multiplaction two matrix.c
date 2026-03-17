#include<stdio.h>
int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("enter a  first matrix :");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter a second matrix :");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=0;
            for(int k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("the result is");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
    }
    return 0;
}
