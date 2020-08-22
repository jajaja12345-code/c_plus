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
#include <set>

constexpr long long INFLL = 1e18;

using namespace std;
using ll = long long;
using P = pair<int, int>;

ll solve(ll n, ll m, ll p) {
    if (p == 1) {
        return n % m;
    }
    else if (p % 2 == 0) {
        ll temp = solve(n, m, p / 2);
        return temp * temp % m;
    }
    else {
        p--;
        ll temp = solve(n, m, p / 2);
        return temp * temp % m * n % m;
    }
}

int main()
{
    ll n, m;
    ll p;
    cin >> n >> m >> p;
    ll ans;

    ans = solve(n, m, p);
    cout << ans << endl;
    return 0;
}