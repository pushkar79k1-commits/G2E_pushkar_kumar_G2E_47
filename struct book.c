#include<stdio.h>
#include<string.h>
int main(){
    struct book{
     float price;
     int page;
     char name[50];
    } a,b,c;
    a.page =40;
    a.price = 411.3;
    strcpy(a.name,"secret seven");
    printf("%d\n",a.page);
    printf("%f\n",a.price);
    printf("%s\n",a.name);
    return 0;
}
