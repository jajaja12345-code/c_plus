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
    int l, r, d;
    cin >> l >> r >> d;
    int ans = 0;

    for (int i = l; i <= r; i++)
    {
        if (i % d == 0)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}