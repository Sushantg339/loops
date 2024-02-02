#include<stdio.h>
int main(){
    int n ;
    printf("enter number of terms : ");
    scanf("%d",&n);
    float a = 100 ;
    for(int i=1 ; i<=n ; i++){
        printf("%f\n",a);
        a = a/2 ;
    }
}