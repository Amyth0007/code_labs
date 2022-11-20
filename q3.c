#include<stdio.h>
#include<conio.h>
int main(){
    int r ,c;
printf("enter row and columns........\n");
scanf("%d%d",&r,&c);
int u[r][c],a,p;
printf ("enter elements......\n");
for(a=0;a<r;a++){
    for(p=0;p<c;p++){
    scanf("%d",&u[a][p]);
}
}
printf ("display uppar tringular......\n");
for(a=0;a<r;a++){
    for(p=0;p<c;p++){
        if(a>p)
 printf("%d \n",u[a][p]);
    }

    
}

    return 0;
}