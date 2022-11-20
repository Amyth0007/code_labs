#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, sum = 0;
    cout<<"enter the values of m aani n ";
    cin>>m>>n;
    int a[m][n], b[m][n], result[m][n];
    cout << "enter the first matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter the " << i << j << " element of matrix\n";
            cin >> a[i][j];
        }
    }
    cout << "enter the second matrix\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "enter the " << i << j << " element of matrix\n";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            sum= sum + a[i][j] + b[i][j];
            result[i][j] = sum;
            sum = 0;
        } 
    }  
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << "the result of " << i << j << ": " << result[i][j]<<endl;
        }

    }
    return 0;
}