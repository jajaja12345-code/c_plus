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
  int gcd = 0;
  int temp = 0;
  int ans = 0;
  for (int i = 2; i <= 1000; i++) {
    temp = 0;
    for (int j : a) {
      if (j % i == 0) {
        temp++;
      }
    }
    if (temp > gcd) {
      gcd = temp;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}