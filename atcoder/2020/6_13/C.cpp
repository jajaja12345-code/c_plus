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

vector<int> a;

int main()
{
    int n, k;
    cin >> n >> k;

    a.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a.at(i);
    }

    int count;
    /*
    vector<int> b(n + 1);
    int min, max;
    for (int i = 1; i <= k; i++)
    {
        b.resize(n + 1, 0);
        for (int m = 1; m <= n; m++)
        {
            min = m - a.at(m);

            max = m + a.at(m);
            if (min < 0)
            {
                min = 0;
            }
            if (max > n)
            {
                max = n;
            }
            for (int l = min; l <= max; l++)
            {
                b.at(l)++;
            }
        }
        a = b;
    }
    */

    vector<int> b_min(n + 1, 0);
    vector<int> b_max(n + 1, 0);
    vector<int> b_count(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        b_min.at(i) = i;
        b_max.at(i) = i;
    }

    int min, max;
    for (int i = 1; i <= k; i++)
    {
        for (int m = 1; m <= n; m++)
        {
            if (b_count.at(m) == n)
            {
                continue;
            }
            if (b_min.at(m) == 0 && b_max.at(m) == n)
            {
                continue;
            }
            min = m - a.at(m);
            max = m + a.at(m);
            if (min < 0)
            {
                min = 0;
            }
            if (max > n)
            {
                max = n;
            }

            for (int l = b_min.at(m) - 1; l >= min; l--)
            {
                b_count.at(l)++;
            }
            for (int l = b_max.at(m) + 1; l <= max; l++)
            {
                b_count.at(l)++;
            }
            b_min.at(m) = min;
            b_max.at(m) = max;
        }
        for (int m = 1; m <= n; m++)
        {
            a.at(m) = b_count.at(m);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << a.at(i) << endl;
    }
    return 0;
}