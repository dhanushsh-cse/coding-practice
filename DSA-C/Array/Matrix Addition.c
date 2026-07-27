#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int n, m, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    printf("Enter first matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSum of two matrices:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}