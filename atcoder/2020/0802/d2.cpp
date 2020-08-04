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

    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 0;
    int w = 0;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.at(i) == 'W')
        {
            // w++;
        }
        else
        {
            r++;
        }
    }
    count = r;

    for (int i = 1; i <= n; i++)
    {
        if (s.at(i - 1) == 'W')
        {
            w++;
        }
        else
        {
            r--;
        }
        count = min(max(w, r), count);
    }

    cout << count << endl;
    return 0;
}