#include<stdio.h>
#include<conio.h>
 int main(){
int r , c;
printf("enter row and column......\n");
scanf("%d%d",&r,&c);
int a[r][c], i,j;
printf ("enter matrix.......\n");
for (i=0;i<r;i++){
    for(j=0;j<c;j++){

scanf("%d",&a[i][j]);
    }
}
printf ("display diagonal elements.......\n");
for (i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(i==j)
        printf ("%d\t",a[i][j]);
        
 
    }
     printf ("\n");
}
return 0;
}