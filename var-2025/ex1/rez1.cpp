#include <iostream>
using namespace std;

bool ogl(int nx, int ny)
{
    int aux = 0;

    while (ny)
    {
        aux = aux * 10 + ny % 10;
        ny /= 10;
    }

    return (nx == aux);
}

void pao(int x, int y, int &rez)
{
    int nx, ny;
    nx = ny = 0;

    while (x)
    {
        if (x % 2 == 0 && x % 10 != 0)
            nx = nx * 10 + (x % 10);

        x /= 10;
    }

    while (y)
    {
        if (y % 2 == 0 && y % 10 != 0)
            ny = ny * 10 + (y % 10);

        y /= 10;
    }

    if (nx == 0 && ny == 0)
        rez = 0;
    else
        rez = ogl(nx, ny);
}

int main()
{
    int x, y, rez;
    cin >> x >> y;

    pao(x, y, rez);
    cout << rez;

    return 0;
}