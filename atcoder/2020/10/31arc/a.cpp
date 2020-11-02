#include <math.h>
#include <stdio.h>
#include <string.h>

#include <algorithm>
#include <bitset>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>

constexpr long long INFLL = 1e18;

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll lim = 998244353;
  ll a, b, c;
  cin >> a >> b >> c;
  ll maxN = max(max(a, b), c);
  ll sumN = 0;
  ll maxA, maxB, maxC;

  maxA = a * (a + 1) / 2 % lim;

  maxB = b * (b + 1) / 2 % lim;
  maxC = c * (c + 1) / 2 % lim;

  ll ans = maxA * maxB % lim;
  ans = ans * maxC % lim;
  cout << ans << endl;
  return 0;
}