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

int ans = 0;
int n, k;

void solve(vector<vector<ll>> t, set<int> ch, ll sum, int last) {
  int la = ch.size();
  if (la < n) {
    for (int i = 1; i < n; i++) {
      decltype(ch)::iterator it = ch.find(i);
      if (it != ch.end()) {
        // cout << "見つかった" << endl;
        // cout << "i" << i << ":sum" << sum << ":last" << last << endl;
        continue;
      } else {
        sum += t.at(last).at(i);
        // cout << "見つからない" << endl;
        // cout << "i" << i << ":sum" << sum << ":last" << last << endl;
        ch.insert(i);
        solve(t, ch, sum, i);
        ch.erase(i);
        sum -= t.at(last).at(i);
      }
    }
  } else {
    sum += t.at(last).at(0);
    // cout << "size == n" << endl;
    // cout << "sum" << sum << ":ch.at(la)" << ch.at(la) << endl;
    if (sum == k) {
      //   cout << "sum == k" << endl;
      //   cout << ":sum" << sum << ":last" << last << endl;
      ans++;
    } else {
      //   cout << "sum != k" << endl;
      //   cout << ":sum" << sum << ":last" << last << endl;
    }
    return;
  }
}

int main() {
  cin >> n >> k;
  vector<vector<ll>> t(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ll temp;
      cin >> temp;
      t.at(i).push_back(temp);
    }
  }
  set<int> ch;
  ch.insert(0);
  ll sum = 0;
  solve(t, ch, sum, 0);
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