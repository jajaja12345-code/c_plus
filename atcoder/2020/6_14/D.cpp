#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>

/////////////////////////TLE

typedef long long ll;

constexpr long long INFLL = 1e18;

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());

    int count = 0;
    int c, d;
    int ago = 0;
    ll temp = 1;

    for (int i = 0; i < n; i++)
    {
        d = a.at(i);
        if (ago == d)
        {
            count--;
            ago--;
        }

        c = 1;

        for (int k = 0; k < i; k++)
        {

            if (d % a.at(k) == 0)
            {
                c = 0;
                break;
            }
        }

        if (c == 1)
        {

            ago = d;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}