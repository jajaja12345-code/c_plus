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
  int n, d1, d2;
  cin >> n;
  int check = 0;
  for (int i = 0; i < n; i++) {
    cin >> d1;
    cin >> d2;
    if (d1 == d2) {
      check++;
    } else {
      check = 0;
    }
    if (check >= 3) {
      cout << "Yes" << endl;
      break;
    }
  }
  if (check < 3) {
    cout << "No" << endl;
  }
  return 0;
}