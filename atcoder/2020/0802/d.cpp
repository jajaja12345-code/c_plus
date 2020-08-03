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
    vector<int> s(n);
    char temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 'R')
        {

            s.at(i) = 1;
        }
        else
        {
            s.at(i) = 0;
        }
    }
    int r = n - 1;
    bool che = false;
    int count = 0;
    int i;

    for (i = 0; i < n; i++)
    {
        if (s.at(i) == 0)
        {
            while (s.at(r) == 0)
            {
                if (i >= r)
                {
                    che = true;
                    break;
                }

                r--;
            }

            if (che)
            {
                break;
            }

            // r--;
            // count++;
            // これだとだめ

            if (r > i)
            {
                r--;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}