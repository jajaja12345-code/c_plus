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
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }
  ll ans = 0;
  int temp = 0;

  for (int i = 1; i < n; i++) {
    if (a.at(i - 1) > a.at(i)) {
      temp = a.at(i - 1) - a.at(i);
      a.at(i) += temp;
      ans += temp;
    }
  }

  cout << ans << endl;

  return 0;
}