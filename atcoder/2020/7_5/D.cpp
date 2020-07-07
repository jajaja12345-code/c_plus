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
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    //sort(a.begin(), a.end(), std::greater<int>());
    std::sort(a.rbegin(), a.rend());

    ll ans = 0;
    ans = a.at(0);

    for (int i = 2; i < n; i++)
    {
        ans += a.at(floor(i / 2));
    }

    cout << ans << endl;
    return 0;
}