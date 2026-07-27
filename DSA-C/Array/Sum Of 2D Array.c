#include<stdio.h>
int main()
{
    int i, j, n, m; 
    int a[10][10], sum = 0;
    printf("Enter the value of n and m: ");
    scanf("%d %d", &n, &m);

    printf("Enter the Elements: ");
    for( i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Array of Elements:");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("%d ",a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    printf("Sum of 2D Array Elements is %d", sum);
    return 0;
}