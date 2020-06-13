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
    int a, v, b, w, t;

    cin >> a >> v >> b >> w >> t;
    if (w >= v)
    {
        cout << "NO" << endl;
        return 0;
    }

    int dis = abs(a - b);

    if (v * t >= dis + w * t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}