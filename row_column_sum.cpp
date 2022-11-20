//array row sum column sum
#include <iostream>
using namespace std;
int main()
{
    int n;
    int amt[5][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    for (int i = 0; i < 5; i++)
    {
        cout << "enter the " << i + 1 << " row: ";
        for (int j = 0; j < 5; j++)
        {
            cout << amt[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "enter the " << j + 1 << " column: ";
        for (int i = 0; i < 5; i++)
        {
            cout << amt[i][j] << " ";
        }
        cout << endl;
    }
    cout << "enter row sum: ";
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += amt[i][j];
        }
        cout << sum << " ";
        sum = 0;
    }
    cout << "\nenter column sum: ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += amt[j][i];
        }
        cout << sum << " ";
        sum = 0;
    }
    return 0;
}