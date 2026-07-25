#include<stdio.h>
struct polynomial
{
    int coeff;
    int exp;
};

int main()
{
    int n, i;
    struct polynomial p[10];
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    printf("Enter the Coefficient and Exponents: ");
    for(i = 0; i < n; i++){
        scanf("%d %d", &p[i].coeff,&p[i].exp);
    }
    
    printf("Polynomial");
    for(i = 0; i < n; i++){

        printf("%dx^%d", p[i].coeff, p[i].exp);
        if(i != n-1){
            printf(" + ");
        }
    }
    return 0;
}