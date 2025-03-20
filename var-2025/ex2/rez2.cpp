#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        int aux = i + 1;
        for (int j = 0; j < n; j++)
        {
            a[i][j] = k * (i + 1) + aux - 1 ;
            aux--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }

    return 0;
}
