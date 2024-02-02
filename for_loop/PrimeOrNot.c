// method 1 
#include<stdio.h>
int main(){
    int x ;
    printf("enter a number : ");
    scanf("%d",&x);

//     for(int i = 2 ; i <= x ; i++){
//         if(x%i==0){
//             printf("number is not prime .");
//             break;
//         }
//         else{
//             printf("the number is prime");
//             break;
//         }
//     }

// }

// method 2

int a = 0;
for(int i = 2 ; i < x ; i++ ){
    if (x%i==0)
    {
        a = 1 ;
        break;
    }
}
   if(a==0) printf("number is prime ");
   else printf("number is composite");
}