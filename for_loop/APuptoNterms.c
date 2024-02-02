#include<stdio.h>
int main(){
    int n ;
    printf("enter number of terms : ");
    scanf("%d",&n);
    int a = 1+(n-1)*2 ;
    for(int i=1 ; i <= a ; i=i+2){
        printf("%d\n",i);
    }
}