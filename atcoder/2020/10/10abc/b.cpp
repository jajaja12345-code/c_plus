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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) {
    cin >> s.at(i);
  }

  int count = 0;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (s.at(i).at(j) == '#') {
        continue;
      } else {
        if (i <= h - 2) {
          if (s.at(i + 1).at(j) == '.') {
            count++;
          }
        }
        if (j <= w - 2) {
          if (s.at(i).at(j + 1) == '.') {
            count++;
          }
        }
      }
    }
  }

  cout << count << endl;
  return 0;
}