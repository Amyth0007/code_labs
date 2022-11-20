#include <bits/stdc++.h>
using namespace std;
void qwert(int a[], int t[], int x, int y)
{
    vector<int> amit;
    int i = 0;
    while (x > i)
    {
        amit.push_back(a[i]);
        i++;
    }
    int j = 0;
    while (y > j)
    {
        int op = t[j];
        vector<int>::iterator l;
        l = find(amit.begin(), amit.end(), op);
        if (l != amit.end())
        {
            j++;
            continue;
        }
        else
        {
            amit.push_back(t[j]);
        }
        j++;
    }
    sort(amit.begin(), amit.end());
    for (auto i = amit.begin(); i != amit.end(); i++)
    {
        cout << *i << " ";
    }
}
int main()
{
    int amit[] = {1, 2, 20, 4, 5, 6, 7};
    int tiksha[] = {3, 2, 20, 12};
    int m = sizeof(amit) / sizeof(amit[0]);
    int n = sizeof(tiksha) / sizeof(tiksha[0]);

    for (int i = 0; i < m; i++)
    {
        cout << amit[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tiksha[i] << " ";
    }
    cout << endl;
    qwert(amit, tiksha, m, n);
    
    return 0;
}