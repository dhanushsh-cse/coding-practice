#include<stdio.h>
 int main()
 {
    int p, r, t;
    float si; 
     
    printf("Enter the principal amount: ");
    scanf("%d", &p);
    printf("Enter the rate of interest: ");
    scanf("%d", &r);
    printf("Enter the time in years: ");
    scanf("%d", &t);

    si = (p*r*t)/100;

    printf("Simple Interest: %f", si);
 }
