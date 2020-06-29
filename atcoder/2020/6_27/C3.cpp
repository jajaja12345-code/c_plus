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
    int n, m, k;
    cin >> n;
    cin >> m;
    cin >> k;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b.at(i);
    }

    vector<ll> c(n + 1);
    vector<ll> d(m + 1);

    c.at(0) = 0;
    for (int i = 1; i <= n; i++)
    {
        c.at(i) = c.at(i - 1) + a.at(i - 1);
    }

    //cout << " ddddddddddddddddddddddddddddddddddddddd" << endl;

    d.at(0) = 0;
    for (int i = 1; i <= m; i++)
    {
        d.at(i) = d.at(i - 1) + b.at(i - 1);
    }

    ll temp;
    int ans = 0;

    vector<ll>::iterator position;
    int dis;

    for (int i = 0; i <= n; i++)
    {
        temp = k - c.at(i);
        if (temp < 0)
        {
            break;
        }
        position = upper_bound(d.begin(), d.end(), temp);
        dis = distance(d.begin(), position) - 1;
        if (ans < dis + i)
        {
            ans = dis + i;
        }
    }

    cout << ans << endl;
    return 0;
}
