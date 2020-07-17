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

ll solve(vector<P> p)
{
    int s = p.size();
    for (int i = 0; i < s; i++)
    {
        p.at(i).first = min(s, p.at(i).first);
    }
    priority_queue<int> pq;

    vector<vector<int>> vv(s + 1);
    ll ans = 0;
    for (int i = 0; i < s; i++)
    {
        vv.at(p.at(i).first).push_back(p.at(i).second);
    }
    for (int i = s; i >= 1; i--)
    {
        for (int k : vv.at(i))
        {
            pq.push(k);
        }
        if (pq.size() > 0)
        {
            ans += pq.top();
            // cout << "check" << endl;
            pq.pop();
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> k(n);
        vector<P> l, r;

        int left, right;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> k.at(i) >> left >> right;
            int temp = min(left, right);
            left -= temp;
            right -= temp;
            ans += temp;
            // cout << "a:" << temp << endl;
            if (left == 0)
            {
                // cout << "right:" << i << endl;
                r.emplace_back(n - k.at(i), right);
            }
            else
            {
                // cout << "left:" << i << endl;
                l.emplace_back(k.at(i), left);
            }
        }

        ans += solve(r);
        //cout << ans << endl;
        ans += solve(l);
        cout << ans << endl;

        t--;
    }

    return 0;
}