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
    int n;
    cin >> n;
    string s;

    int ac = 0;
    int tle = 0;
    int wa = 0;
    int re = 0;
    while (n > 0)
    {
        cin >> s;
        if (s == "AC")
        {
            ac++;
        }
        else if (s == "WA")
        {
            wa++;
        }
        else if (s == "TLE")
        {
            tle++;
        }
        else
        {
            re++;
        }
        n--;
    }

    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

    return 0;
}