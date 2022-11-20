// mxximum in three number using conditionxl
# include <stdio.h>
int main(){
int x, y, z, max ;
printf("Enter the numbers ") ;
scanf("%d %d %d", &x, &y, &z) ;
max = x > y ? ( x > z ? x : z) : (y > z ? y : z) ;
printf("\nThe maximum number is = %d", max) ;
}