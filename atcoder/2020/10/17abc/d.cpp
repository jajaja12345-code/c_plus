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
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  bool check = false;
  ll exp = 0;
  while (x < b) {
    if (x >= y) {
      x /= a;
      exp--;
      check = true;
      break;
    }
    x *= a;
    exp++;
  }
  if (check == false && x >= y) {
    x /= a;
    exp--;
  }
  if (check == false && y > x) {
    ll dif = y - x;
    ll count = dif / b;
    if (dif % b == 0 && count > 0) {
      count--;
    }
    exp += count;

    // x += b * count;
    /*
        while (x < y) {
          x += b;
          exp++;
        }
        x -= b;
        exp--;
        */
  }
  //   cout << x << endl;
  if (exp < 0) {
    exp = 0;
  }
  cout << exp << endl;
  return 0;
}