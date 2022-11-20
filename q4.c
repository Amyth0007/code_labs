#include<stdio.h>
#include<conio.h>
int main(){
    int x, y;
printf("enter row and columns........\n");
scanf("%d%d",&x,&y);
int u[x][y],h,d;
printf ("enter elements......\n");
for(h=0;h<x;h++){
    for(d=0;d<y;d++){
    scanf("%d",&u[h][d]);
}
}
printf ("display lower traingular elements......\n");
for(h=0;h<x;h++){
    for(d=0;d<y;d++){
        if(h<d)
 printf ("%d \n",u[h][d]);
    }

    
}

    return 0;
}