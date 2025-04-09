#include <iostream>
#include <cmath>
using namespace std;

bool prim(int n)
{
    bool is_prime = true;

    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}

bool moderat(int n)
{
    int x1 = sqrt(n);
    // bool is_moderat = false;
    int x2 = ++x1;
    while (!prim(x1))
        x1--;
    while (!prim(x2))
        x2++;
    // if(x1 * x2 == n) is_moderat = true;
    return x1 * x2 == n;
}

int main()
{
    int n;
    cin >> n;
    cout << moderat(n);
    return 0;
}
