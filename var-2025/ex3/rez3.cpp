#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x, a, b, pen, ult;
    a = b = pen = ult = -1;
    ifstream fin("bac.txt");
    fin >> x;

    while (fin >> b)
    {
        if (a != -1)
        {
            int an_curent, an_precedent;
            an_curent = b % 10000;
            an_precedent = a % 10000;

            if (an_curent == an_precedent && an_curent == x)
            {
                pen = a / 10000;
                ult = b / 10000;
            }
        }
        a = b;
    }

    if (pen != -1 && ult != -1)
        cout << pen << " " << ult;
    else
        cout << "Nu exista";

    fin.close();
    return 0;
}