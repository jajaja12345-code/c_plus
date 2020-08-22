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
  int n, x, t;
  cin >> n >> x >> t;
  int time = n / x;
  int a = n % x;
  if (a == 0) {
    cout << time * t << endl;
  } else {
    cout << (time + 1) * t << endl;
  }
  return 0;
}