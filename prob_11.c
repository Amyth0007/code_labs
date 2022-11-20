// #include<bits/stdc++.h>
// using namespace std;
int main(){
int num;
// cout<<"enter any number ";
     printf("Enter First Number  : ");
      scanf("%d", &num);


int a = num;
int count =0;
while(num>0){
    num = num/2;
    count++;
}
 int msb = pow(2 , (count-1));
//  cout<<msb<<endl;
     printf("MSB = %d", msb);

 if(msb&1){
    // cout<<"msb of "<<a<<" is set ie. 1"<<endl;
         printf("msb of %d is set ie. 1 ", a);

 }else{
    
    // cout<<"msb of "<<a<<" is unset ie. 0"<<endl;
         printf("msb of %d is unset ie. 0 ", a);
 }
 
return 0;
}