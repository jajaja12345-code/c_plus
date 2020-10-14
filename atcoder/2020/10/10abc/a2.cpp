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
  char s, t;
  cin >> s >> t;
  if (s == 'Y') {
    t ^= 32;
    cout << t << endl;
  } else {
    cout << t << endl;
  }
  return 0;
}