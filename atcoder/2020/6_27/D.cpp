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
    int n;
    cin >> n;

    ll ans = 0;

    int max_i;

    for (int i = 1; i <= n; i++)
    {
        max_i = n / i;
        ans += (max_i * (max_i + 1) * i) / 2;
    }

    cout << ans << endl;

    return 0;
}