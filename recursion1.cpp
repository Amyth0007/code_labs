#include<bits/stdc++.h>
using namespace std;

void print(int n){
   for (int i = 0; i < n; i++)
   {
    cout<<"amit"<<endl;
   
   }
   // time complexity O(n) = O(5)= O(logn)
   
}
void print_by_rec(int n){
   if(n==0){
    return;
   }
   cout<<"amit"<<endl;
   print_by_rec(n-1);
//    print_by_rec(4);
//    print_by_rec(3);
// time complexity  O(logn)
   
}

int main(){
int n;
cin>>n;
//  print(n);
print_by_rec(n) ;
// print_by_rec(5) ;
//
return 0;
}