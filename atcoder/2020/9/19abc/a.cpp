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
  string s;
  cin >> s;
  int l = s.size();
  if (s.at(l - 1) == 's') {
    cout << s << "es" << endl;
  } else {
    cout << s << 's' << endl;
  }
  return 0;
}