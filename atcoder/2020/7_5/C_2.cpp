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
    int h, w, k;
    cin >> h >> w >> k;

    vector<vector<char>> data(h, vector<char>(w));

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> data.at(i).at(j);
        }
    }

    vector<int> y;
    vector<int> t;

    int count = 0;
    int ans = 0;

    int sum = h + w;

    for (int tmp = 0; tmp < (1 << sum); tmp++)
    {
        y.clear();
        t.clear();
        count = 0;

        bitset<12> s(tmp);
        for (int i = 0; i < h; i++)
        {
            if (s.test(i) == 0)
            {
                y.push_back(i);
            }
        }
        for (int i = h; i < sum; i++)
        {
            if (s.test(i) == 0)
            {
                t.push_back(i - h);
            }
        }

        bool check = false;

        for (const auto &e : y)
        {
            for (const auto &d : t)
            {
                if (data.at(e).at(d) == '#')
                {
                    count++;
                }
            }
        }

        if (count == k)
        {

            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}