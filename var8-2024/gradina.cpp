#include <iostream>
using namespace std;

int main()
{
    int g[101][101];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> g[i][j];
        }
    }

    for (int i = 0; i < m; i = i + 2)
    {
        int mp = 11; // minim planta

        for (int j = 0; j < n; j++)
        {
            if (g[i + 1][j] < mp)
                mp = g[i + 1][j];
        }

        for (int j = 0; j < n; j++)
        {
            if (g[i][j] >= mp)
                g[i][j] = mp - 1;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}