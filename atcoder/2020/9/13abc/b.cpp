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
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  ll ans;
  if (b <= 0 && d <= 0) {
    ans = a * c;
  } else if (a >= 0 && c >= 0) {
    ans = b * d;
  } else {
    if (b < 0 && c > 0) {
      ans = b * c;
    } else if (a > 0 && d < 0) {
      ans = d * a;
    } else {
      ll temp1, temp2;
      temp1 = a * c;
      temp2 = b * d;
      ans = max(temp1, temp2);
    }
  }
  cout << ans << endl;

  return 0;
}