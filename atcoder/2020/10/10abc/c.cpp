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
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p.at(i);
  }

  set<int> s;
  int minV = 0;
  for (int i = 0; i < n; i++) {
    s.insert(p.at(i));
    while (1) {
      decltype(s)::iterator it = s.find(minV);
      if (it != s.end()) {  // 見つかった
        minV++;
        continue;
      } else {
        break;
      }
    }

    if (minV == p.at(i)) {
      minV++;
    }
    cout << minV << endl;
  }
  return 0;
}