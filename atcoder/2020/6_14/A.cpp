#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>

typedef long long LL;

constexpr long long INFLL = 1e18;

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int n = 5;
    if (a == 0)
    {
        cout << 1 << endl;
    }

    if (b == 0)
    {
        cout << 2 << endl;
    }
    if (c == 0)
    {
        cout << 3 << endl;
    }
    if (d == 0)
    {
        cout << 4 << endl;
    }
    if (e == 0)
    {
        cout << 5 << endl;
    }
    return 0;
}