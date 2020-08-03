#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>
#include <queue>

constexpr long long INFLL = 1e18;

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k;
    cin >> k;
    if (k % 2 == 0 || k % 5 == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        if (k % 7 == 0)
        {
            k /= 7;
        }

        int x = 1 % k;
        int count = 1;

        while (x != 0)
        {
            x = x * 10 + 1;
            x %= k;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}