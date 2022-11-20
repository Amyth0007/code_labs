#include<bits/stdc++.h>
using namespace std;
int power(int a , int b){
    if(b==0)
    {
        return 1;
    }
    else
    {
               return power(a, b-1)*a;
            // when a=3 b= b-1=2 ==> power(3 , 2)*3;
            // when a=3 b= b-1=1 ==> (power(3 , 1)*3)*3;
            // when a=3 b= b-1=0 ==> ((power(3 , 1)*3)*3)*3;
            // when a=3 b= b-1=0 ==> (1*3)*3)*3;
    }
}
int main(){
int a, b;
cin>>a>>b;
cout<<power(a, b);
return 0;
}