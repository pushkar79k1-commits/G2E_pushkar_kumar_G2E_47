#include<stdio.h>
int main(){
    int arr[10],i,n=10;
    int high,low,mid,found=0,key;
    printf("enter the searching element");
    for(i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter key elementyou want to search");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low +high)/2;
        if(arr[mid]==key){
            found=1;
            break;
        }
        else if(arr[mid]<key){
            high=mid+1;
        }
        else{
            low=mid-1;
        }
    }
    if(found){
        printf("the element f1ound postion at %d",mid+1);
    }
    else{
        printf("element not found");
    }
    return 0;
}