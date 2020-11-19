
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
  int ans = 0;
  int n, k;
  cin >> n >> k;
  vector<vector<ll>> t(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ll temp;
      cin >> temp;
      t.at(i).push_back(temp);
    }
  }
  vector<int> ch;
  for (int i = 1; i <= n - 1; i++) {
    ch.push_back(i);
  }
  do {
    int sum = 0;
    sum += t.at(0).at(ch.at(0));
    for (int i = 1; i <= n - 2; i++) {
      sum += t.at(ch.at(i - 1)).at(ch.at(i));
    }
    sum += t.at(ch.at(n - 2)).at(0);
    if (sum == k) {
      ans++;
    }

  } while (next_permutation(ch.begin(), ch.end()));

  cout << ans << endl;

  return 0;
}

/*
3 31
0 1 10
1 0 20
10 20 0
*/

/*
4 33
0 1 1 10
1 0 2 20
1 2 0 30
10 20 30 0
*/