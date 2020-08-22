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
  int ch, cw, dh, dw;
  cin >> ch >> cw >> dh >> dw;
  ch--;
  cw--;
  dh--;
  dw--;
  char temp;

  vector<vector<int>> s(h, vector<int>(w));
  for (int i = 0; i < h; i++) {
    for (int k = 0; k < w; k++) {
      cin >> temp;
      if (temp == '.') {
        s.at(i).at(k) = 1e6;
      } else {
        s.at(i).at(k) = -10;
      }
    }
  }
  vector<int> x = {1, 0, -1, 0};
  vector<int> y = {0, 1, 0, -1};
  queue<P> que;
  int count = 0;
  que.emplace(ch, cw);
  int th, tw;

  vector<int> wx = {2, 1, 0, -1, -2};
  vector<int> wy = {2, 1, 0, -1, -2};
  queue<P> wq;
  bool check;
  int vx, vy;

  while (!que.empty() || !wq.empty()) {
    while (!que.empty()) {
      th = que.front().first;
      tw = que.front().second;
      check = false;

      for (int i = 0; i < 4; i++) {
        vy = y.at(i);
        vx = x.at(i);

        if (vy + th >= h || vx + tw >= w || vy + th < 0 || vx + tw < 0) {
          continue;
        }
        if (s.at(vy + th).at(vx + tw) == -10) {
          check = true;
        }
        if (s.at(vy + th).at(vx + tw) > count) {
          s.at(vy + th).at(vx + tw) = count;
          que.emplace(vy + th, vx + tw);
        }
      }
      if (check) {
        wq.emplace(th, tw);
      }
      que.pop();
    }

    count++;
    while (!wq.empty()) {
      th = wq.front().first;
      tw = wq.front().second;
      for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
          vy = wy.at(i);
          vx = wx.at(k);

          if (vy + th >= h || vx + tw >= w || vy + th < 0 || vx + tw < 0) {
            continue;
          }
          if (s.at(vy + th).at(vx + tw) > count) {
            s.at(vy + th).at(vx + tw) = count;
            que.emplace(vy + th, vx + tw);
            // wq.emplace(i + th, i + tw);
          }
        }
      }
      wq.pop();
    }
  }

  if (s.at(dh).at(dw) == 1e6) {
    cout << -1 << endl;
  } else {
    cout << s.at(dh).at(dw) << endl;
  }
  /*
    for (int i = 0; i < h; i++) {
      for (int k = 0; k < w; k++) {
        cout << s.at(i).at(k) << ' ';
      }
      cout << endl;

    }
    */

  return 0;
}