#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>

typedef long long ll;

constexpr long long INFLL = 1e18;

using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll a;

    if (n > k)
    {
        a = n / k;
        n = n - k * a;
    }
    if (n == 0)
    {
        cout << n << endl;
        return 0;
    }

    while (n > k)
    {
        if (n - k < 0)
        {
            n = -1 * (n - k);
        }
        else
        {
            n = n - k;
        }
    }

    ll m;
    if (n - k < 0)
    {
        m = -1 * (n - k);
    }
    else
    {
        m = n - k;
    }

    if (n < m)
    {
        cout << n << endl;
    }
    else
    {
        cout << m << endl;
    }
    /*
    while (n > k)
    {
        n = abs(n - k);
    }

    if (n < abs(n - k))
    {
        cout << n << endl;
    }
    else
    {
        cout << abs(n - k) << endl;
    }
    */

    return 0;
}