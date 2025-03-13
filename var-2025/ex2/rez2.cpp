#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    int a[100][100];
    for (int i = 0; i <= n; i++)
    {
        int aux = i;
        for (int j = 0; j <= n; j++)
        {
            a[i][j] = k * i + aux;
            aux--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j];

        cout << endl;
    }

    return 0;
}