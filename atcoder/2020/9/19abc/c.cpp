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
constexpr long long aPN = 1e9 + 7;

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  int temp;
  double sq;
  int ans = 0;
  double ze = 0.0;

  for (int c = 1; c < n; c++) {
    temp = n - c;
    sq = sqrt(temp);

    if (floor(sq) == sq) {
      ans++;
      for (int a = 1; a < sq / 1; a++) {
        if (temp % a == 0) {
          ans += 2;
        }
      }
    } else {
      for (int a = 1; a <= sq / 1; a++) {
        if (temp % a == 0) {
          ans += 2;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}