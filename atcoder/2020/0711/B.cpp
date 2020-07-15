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
    int a;
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (i % 2 == 1 && a % 2 == 1)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}