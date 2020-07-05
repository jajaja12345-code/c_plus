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

    for (int tmp = 0; tmp < (1 << h + w + 2); tmp++)
    {
        y.clear();
        t.clear();
        count = 0;

        bitset<6 + 6 + 2> s(tmp);
        for (int i = 0; i < h + 1; i++)
        {
            if (s.test(i) == 0)
            {
                y.push_back(i);
            }
        }
        for (int i = h + 1; i < h + w + 2; i++)
        {
            if (s.test(i) == 0)
            {
                t.push_back(i - h - 1);
            }
        }

        bool check = false;

        for (const auto &e : y)
        {
            if (e == 0 || check == true)
            {
                break;
            }
            for (const auto &d : t)
            {
                if (d == 0)
                {
                    check = true;
                    break;
                }
                if (data.at(e - 1).at(d - 1) == '#')
                {
                    count++;
                }
            }
        }

        if (count == k)
        { /*
            for (const auto &e : y)
            {
                cout << "y:" << e;
            }
            cout << endl;
            for (const auto &d : t)
            {
                cout << "t:" << d;
            }
            cout << endl;
            */

            ans++;
            // cout << "ans:" << ans << endl;
        }
    }

    cout << ans << endl;
    return 0;
}