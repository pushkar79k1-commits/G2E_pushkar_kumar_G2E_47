#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    printf("enrer a size of first matrix: ");
    scanf("%d%d",&r1,&c1);
     printf("enrer a size of second matrix: ");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],c[r1][r2];;
    printf("enter a element of first matrix ");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter a element of second matrix ");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(r1!=r2||c1!=c2){
        printf("add of matrix not  posible");
    }
    //add to matrix
    printf("add too matrix :");
    for(int i=0 ;i<r1;i++){
        for(int j=0;j<=c1;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
    }
    return 0;
}
