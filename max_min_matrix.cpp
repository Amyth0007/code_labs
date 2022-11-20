#include <bits/stdc++.h>
using namespace std;
int main(){
int n, m;
cout << "enter the value of n and m\n";
cin >> n >> m;
int amt[n][m];
for (int i = 0; i < n; i++) 
{
    for (int j = 0; j < m; j++)
    {
      cin >> amt[i][j];
    }
}
cout << endl;
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
for (int i = 0; i < n; i++)
{ 

    for (int j = 0; j < m; j++)
    {

        if(amt[i][j]>maxNo){
            maxNo = amt[i][j];
        }
        }
    for (int j = 0; j < m; j++)
    {

        if(amt[i][j]<minNo){
            minNo= amt[i][j];
        }
        //     if(amt[i][j]==x)
        // cout << amt[i][j] << " is at the possition of  "<<i<<" "<<j<<endl;
    }
}
cout<<"max no is"<<maxNo<<endl;
cout<<"max no is"<<minNo<<endl;
return 0;
}