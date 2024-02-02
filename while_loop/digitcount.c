#include<stdio.h>
int main(){
    int x ;
    printf("enter the number : ");
    scanf("%d",&x);
    int c=0;
    while(x!=0){
        x =x / 10;
        c++;
    }
    printf("%d",c);

}