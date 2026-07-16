#include<stdio.h>
int main()
{
    float a,b;
    int choice;
    printf("1.add\n");
    printf("2.sub\n");
    printf("3.multiply\n");
    printf("4.div\n");
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("enter the choice:");
    scanf("%d", &choice);
 switch(choice)
 {
    case 1:
         printf("the sum is %f", a+b);
         break;
    case 2:
         printf("the sub is %f", a-b);
         break;
    case 3:
         printf("the multiply is %f", a*b);
         break;
    case 4:
         printf("the div is %f", a/b);
         break;
    default:
         printf("Not valid choice");
         break;                       
 }   
return 0;
}