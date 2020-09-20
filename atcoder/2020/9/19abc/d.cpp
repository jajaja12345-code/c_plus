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
  const int mPN = 998244353;
  ll n, k;
  cin >> n >> k;
  vector<ll> l(k);
  vector<ll> r(k);

  for (int i = 0; i < k; i++) {
    cin >> l.at(i) >> r.at(i);
  }

  vector<ll> alSum(n + 1, 0);
  vector<ll> dp(n + 1, 0);

  dp.at(1) = 1;
  alSum.at(1) = 1;

  for (int i = 2; i <= n; i++) {
    for (int j = 0; j < k; j++) {
      ll tempL, tempR;
      tempL = i - l.at(j);
      tempR = i - r.at(j);
      if (tempR >= 1) {
        if (tempR == tempL) {
          dp.at(i) += dp.at(tempL);
        } else {
          dp.at(i) += alSum.at(tempL) - alSum.at(tempR - 1);
        }
      } else if (tempL >= 0) {
        dp.at(i) += alSum.at(tempL) - alSum.at(0);
      }
      dp.at(i) %= mPN;
    }
    alSum.at(i) = alSum.at(i - 1) + dp.at(i);
    alSum.at(i) %= mPN;
  }
  if (dp.at(n) < 0) {
    dp.at(n) += mPN;
  }
  cout << dp.at(n) << endl;
  return 0;
}