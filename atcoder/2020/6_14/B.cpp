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
    int x, y;
    cin >> x >> y;
    for (int i = 0; i <= x; i++)
    {
        if (i * 2 + 4 * (x - i) == y)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}