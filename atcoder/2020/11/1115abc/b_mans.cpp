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
  long double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  gy *= -1;
  long double s, k;
  s = (sy - gy) / (sx - gx);

  k = sy - s * sx;

  printf("%.10f", -1.0 * k * (sx - gx) / (sy - gy));

  return 0;
}
