#include<stdio.h>
#include<conio.h>
int main(){
    int o ,l;
printf ("enter number of row and column.......\n");
scanf("%d%d",&o,&l);
int k[o][l],i,j,sum=0;
printf ("enter elements.......\n");
for(i=0;i<o;i++){
       for(j=0;j<l;j++){

          scanf("%d",&k[i][j]);
              }
}

printf ("display sum......\n");
for(i=0;i<o;i++){
    for(j=0;j<l;j++){
        if(i==j)
            sum=sum+k[i][j];
        
    }
    
}
      printf ("Diagonal sum.....\n%d",sum);
    return 0;
}