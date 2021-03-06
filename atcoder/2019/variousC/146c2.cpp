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
    int a, b;
    ll x;
    cin >> a >> b;
    cin >> x;

    ll up = 1e9 + 1;
    ll dow = 0;
    ll len;
    ll temp;

    if (a + b > x)
    {
        cout << 0 << endl;
        return 0;
    }

    while (abs(up - dow) > 1)
    {
        len = (up + dow) / 2;
        temp = a * len + b * to_string(len).size();
        if (temp == x)
        {
            break;
        }
        else if (temp > x)
        {
            up = len;
            len = (up + dow) / 2;
        }
        else
        {
            dow = len;
            len = (up + dow) / 2;
        }
    }

    cout << len << endl;

    return 0;
}