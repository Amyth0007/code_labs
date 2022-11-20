#include <iostream>
using namespace std;
int main()
{
    int m, n, sum = 0;
    int a[3][3], b[3][3], result[3][3];
    cout << "enter the first matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter the " << i << j << " element of matrix\n";
            cin >> a[i][j];
        }
    }
    cout << "enter the second matrix\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "enter the " << i << j << " element of matrix\n";
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 3; k++) 
            {
                sum += a[i][k] * b[k][j];             }
            result[i][j] = sum;
            sum = 0;
        } 
    }  
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << "the result of " << i << j << ": " << result[i][j]<<endl;
        }

    }
    return 0;
}