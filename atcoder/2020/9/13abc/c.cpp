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
  ll n;
  cin >> n;
  ll ans;
  ll pn = 1e9 + 7;
  if (n == 1) {
    ans = 0;
  } else {
    ans = 1;
    ll temp1 = 1;
    ll temp2 = 1;
    for (int i = 0; i < n; i++) {
      ans = ans * 10 % pn;
      temp1 = temp1 * 8 % pn;
      temp2 = temp2 * 9 % pn;
    }
    ans = ans - temp2 * 2 + temp1;
    ans %= pn;
    if (ans < 0) {
      ans += pn;
    }
  }
  cout << ans << endl;

  return 0;
}