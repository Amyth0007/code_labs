#include<bits/stdc++.h>
using namespace std;
int main(){
string charcters[10] = {"zero", "one", "two", "three", "four", "five", "six" , "seven", "eight", "nine"};
int num;
cin>>num;
string amit;
while (num>0)
{
    int string1 = num%10;
    for(int i=0;i<10;i++){
        if(string1 == i){
            amit.append(charcters[i]);
            amit.append(" ");
        }
    }
   // Time complexity => O(num*10)
   num= num/10;
}
 cout<<amit<<endl;
 
 
return 0;
}