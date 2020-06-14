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
    int x, n;
    cin >> x >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
    }
    for (int i = 0; i <= n; i++)
    {
        if (find(p.begin(), p.end(), x - i) == p.end())
        {
            cout << x - i << endl;
            return 0;
        }

        if (find(p.begin(), p.end(), x + i) == p.end())
        {
            cout << x + i << endl;
            return 0;
        }
    }

    return 0;
}