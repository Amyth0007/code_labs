#include <bits/stdc++.h>
using namespace std;
int swapping(int naruto, int hinata, int n)
{
    if (n == 0)
    {

        cout << "Values after swapping  a: " << naruto << " and hinata " << hinata;

        return 0;
    }
    swapping(hinata, naruto, n - 1);
}
int main()
{
    int naruto, hinata;
    cout << "Enter the values of naruto and hinata: ";
    cin >> naruto >> hinata;
    cout << "Values before swapping  a: " << naruto << " and hinata " << hinata<< endl;
    swapping(naruto, hinata, 1);

    return 0;
}