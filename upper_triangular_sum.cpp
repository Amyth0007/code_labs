#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int amt[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>amt[i][j];
        }
        
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {    
        for (int j = 0; j < m; j++)
        {  
            if(i<j){
            sum += amt[i][j];
            }
        }

    }
        cout << sum << " ";
    
    return 0;
}