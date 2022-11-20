#include<stdio.h>
int main()
{
     int a, b;

     printf("Enter First Number  : ");
     scanf("%d", &a);
     printf("\nEnter Second Number : ");
     scanf("%d",&b);
     printf("\nNumbers Before Swapping");
     printf("a = %d and b = %d\n", a, b);
     a = a ^ b;
     b = a ^ b;
     a = a ^ b;
     printf("\nNumbers After Swapping");
     printf("a = %d and b = %d", a, b);
     return(0);
}