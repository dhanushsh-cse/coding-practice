#include<stdio.h>
 int main()
 {
    int a;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    if(a % 2 == 0){
         printf("Given number is Even");
    } 
    else {
        printf("Given number is Odd");
    }    
 }