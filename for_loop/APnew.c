#include<stdio.h>
int main(){
    int n ;
    printf("enter number of terms : ");
    scanf("%d",&n);
    int a = 4+(n-1)*3 ;

    for(int i=4 ; i<=a ; i=i+3 ){
        printf("%d ",i);
    }
} 