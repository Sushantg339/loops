#include<stdio.h>
int main (){
    int n ;
    printf("enter the number :");
    scanf("%d",&n);
    int sum = 0;
    while(n!=0){
        int r = n % 10;
        sum = sum + r;
        n = n/10 ;
    }
    printf("%d",sum);
}