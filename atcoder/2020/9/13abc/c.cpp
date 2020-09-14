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
  ll pm = 1e9 + 7;
  if (n == 1) {
    ans = 0;
  } else {
    ans = n * (n - 1);
    ll temp1, temp2;
    for (int i = 0; i <= n - 2; i++) {
            for (int j = n - 2 - i; j >= 0; j--) {
      }
      ans = ans * 10 % pm;
    }
  }
  cout << ans << endl;

  return 0;
}