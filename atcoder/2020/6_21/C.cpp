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
    ll n;
    cin >> n;

    ll temp = 26;
    ll count = 0;
    vector<ll> v;
    v.push_back(temp);

    while (temp < n)
    {
        count++;
        temp = temp * 26 + 26;
        v.push_back(temp);
    }
    vector<char> ans(count + 1);
    int x;
    for (int i = count; i >= 0; i--)
    {
        x = n % 26;
        if (x > 0)
        {
            ans.at(i) = (char)(97 + x - 1);
            n = n / 26;
        }
        else
        {
            ans.at(i) = 'z';
            n = n / 26 - 1;
        }
    }

    for (int i = 0; i <= count; i++)
    {
        cout << ans.at(i);
    }
    cout << endl;

    return 0;
}