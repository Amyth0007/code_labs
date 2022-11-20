#include<bits/stdc++.h>
using namespace std;
int printsum(int n){
// int printsum(5){

    if(n==0){
        return 0;
    }//base case
    else{
    return printsum(n-1)+n;    
    //recurance relation
    
    // return printsum(5-1=4) + n; 
//    when n= 5==>  printsum(4)+5 ==>
    //   printsum(3)+4+5==>
    //   printsum(2)+3+4+5 ==>
    //   printsum(1)+2+3+4+5==>
    //   printsum(0)+1+2+3+4+5
    // 0+1+2+3+4+5
    }
    

}


int main(){

 
 int n;
 cin>>n;
 cout<<printsum(n);
 
return 0;
}