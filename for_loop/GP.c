#include<stdio.h>
int main(){
    int x ;
    printf("enter number of terms : ");
    scanf("%d",&x);
    int a = 1;
    for(int i=1 ; i<=x ; i++){
        printf("%d ",a);
        a = a*2 ;
    }
}