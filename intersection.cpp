#include <bits/stdc++.h>
using namespace std;
void intersection(int amit[], int tiksha[], int m, int n)
{
    for (int i = 0; i < m; i++)
    { for (int j = 0; j < n; j++)
        { if (amit[i] == tiksha[j])
            {
                cout << tiksha[j] << " ";
                break;}
        }
    }
    cout << endl;}
int main()
{
    int amit[] = {12, 1, 234, 45, 34};
    int tiksha[] = {34, 11, 1, 23, 24, 90};
    int m = sizeof(amit) / sizeof(amit[0]);
    int n = sizeof(tiksha) / sizeof(tiksha[0]);
    intersection(amit, tiksha, m, n);
    return 0;
}