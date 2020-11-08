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
  ll count = 0;
  ll temp = n;
  vector<int> a;
  while (temp > 0) {
    a.push_back(temp % 10);
    temp /= 10;
    count++;
  }
  //   cout << "count:" << count << endl;

  ll ans = 19;

  for (ll bit = 0; bit < (1 << count); bit++) {
    vector<int> S;
    ll temp_k = 0;
    ll sum_temp = 1;
    for (int i = 0; i < count; ++i) {
      if (bit & (1 << i)) {
        S.push_back(i);
        temp_k++;
      }
    }
    if (temp_k > 0) {
      sum_temp = 0;
    }

    // cout << "bit" << bit << endl;
    // cout << "temp_k" << temp_k << endl;

    for (int i : S) {
      sum_temp += a.at(i);
      //   cout << "sum_temp" << sum_temp << endl;
    }
    if (sum_temp % 3 == 0) {
      if (count - temp_k < ans) {
        ans = count - temp_k;
      }
    }
  }

  if (ans == 19) {
    ans = -1;
  }

  cout << ans << endl;
  return 0;
}