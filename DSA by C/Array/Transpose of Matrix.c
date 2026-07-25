#include<stdio.h>
int main()
{
    int i, j, a[10][10];
    int n, m;
    printf("Enter the n and m: ");
    scanf("%d %d", &n,&m);
    
    printf("Enter the Elements\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Array of Elements in Matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf(" \n");
    }

    printf("Transpose of Matrix\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf(" %d", a[j][i]);
        }
        printf(" \n");
    }
    return 0;
}