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
  int n;
  cin >> n;
  ll temp = 0;
  vector<ll> a(n);
  vector<ll> cum_sum(n);
  vector<ll> all_sum(n);
  vector<ll> temp_max(n);

  ll max = 0;
  ll max_i = 0;

  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
    temp += a.at(i);
    cum_sum.at(i) = temp;
    if (i == 0) {
      if (temp >= 0) {
        temp_max.at(0) = temp;
      }
    } else {
      if (temp > temp_max.at(i - 1)) {
        temp_max.at(i) = temp;
      } else {
        temp_max.at(i) = temp_max.at(i - 1);
      }
    }

    if (i == 0) {
      all_sum.at(0) = 0;
    } else {
      all_sum.at(i) = all_sum.at(i - 1) + cum_sum.at(i - 1);
    }
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (ans < all_sum.at(i) + temp_max.at(i)) {
      ans = all_sum.at(i) + temp_max.at(i);
      // cout << "i" << i << "all_sum" << all_sum.at(i) << "temp_max"
      //  << temp_max.at(i) << endl;
    }
  }

  cout << ans << endl;
  return 0;
}