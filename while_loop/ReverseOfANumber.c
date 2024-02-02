#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    int r = 0;
    while(x!=0){
        r = r+(x%10);
        r = r*10;
        x=x/10 ;
    }
    printf("%d",r);
}