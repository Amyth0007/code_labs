//finding max and min number
#include <stdio.h>
int main()
{
     int a, b;
   
      printf("Enter first number: ");
      scanf("%d", &a);
   
      printf("Enter second number: ");
      scanf("%d", &b);
	if ( b > a)
		printf("%d is maximum and %d is minimum", b , a);
	else
		printf("%d is maximum and %a is maximum", a , b);
	
    
    return 0;
		
}
