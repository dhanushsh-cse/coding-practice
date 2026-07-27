#include<stdio.h>

int main()
{
    int i,j;
    int a[10][10],b[10][10],c[10][10];
    int n1, m1, n2, m2, k;

    printf("Enter the values of n1 and m1: ");
    scanf("%d %d", &n1, &m1);

    printf("Enter the values of n2 and m2: ");
    scanf("%d %d", &n2, &m2);

    if(m1 != n2)
    {
        printf("Multiplication is not possible\n");
        return 0;
    }
    
    printf("Enter the matrix A\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < m1; j++)
        {
            scanf(" %d", &a[i][j]);
        }
    }

    printf("Enter the matrix B\n");
    for(i = 0; i < n2; i++)
    {
        for(j = 0; j < m2; j++)
        {
            scanf(" %d", &b[i][j]);
        }
    }
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < m2; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < m1; k++)
            {
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    printf("Product Matrix\n");
    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < m2; j++)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }        
    return 0;
}