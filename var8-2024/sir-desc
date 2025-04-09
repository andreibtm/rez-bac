#include <iostream>
#include <fstream>
using namespace std;

fstream fout("bac.txt");

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    fout << z << " " << y << " " << x << " ";

    while (z > 1)
    {
        int n = (4 * y - 3 * x - z) / 2;
        fout << n << " ";
        z = y;
        y = x;
        x = n;
    }

    return 0;
}
