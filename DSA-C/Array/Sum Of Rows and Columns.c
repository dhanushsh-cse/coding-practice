#include<stdio.h>
int main()
{
    int i, j, n, m; 
    int a[10][10], Rowsum = 0, Columnsum  = 0;
    printf("Enter the value of n and m: ");
    scanf("%d %d", &n, &m);

    printf("Enter the Elements\n");
    for( i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf(" \n");
    }
    printf("sum of Row\n");
    for(i=0;i<n;i++)
    {
        Rowsum = 0;
        for(j=0;j<m;j++){
            Rowsum = Rowsum + a[i][j];
        }
            printf("Row %d = %d\n", i + 1,Rowsum);
    }
    printf("sum of Column\n");
    for(j=0;j<n;j++)
    {
        Columnsum = 0;
        for(i=0;i<m;i++){
            Columnsum = Columnsum + a[i][j];
        }
        printf("Column %d = %d\n", j + 1, Columnsum);
    }    
    return 0;
}    
