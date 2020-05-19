#include <iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<string>
#include <queue>
#include <stack>
#include <cmath>
#include <set>
#include <cstring>
#include <map>
using namespace std;
typedef long long ll;
struct A {
	int a, b, c, d;
}a[51];
int n, m, q;
ll ans = 0;
vector<int> v;
void go(int x) {
	if (v.size() == n) {
		ll cnt = 0;
		for (int i = 0; i < q; i++) {
			ll t = v[a[i].b - 1] - v[a[i].a - 1];
			if (t == a[i].c) {
				cnt += a[i].d;
			}
		}
		if (ans < cnt) {
			ans = cnt;
		}
		return;
	}
	for (int i = x; i <= m; i++) {
		v.push_back(i);
		go(i);
		v.pop_back();
	}
}
int main() {
	cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
	cin >> n >> m >> q;
	for (int i = 0; i < q; i++) {
		cin >> a[i].a >> a[i].b >> a[i].c >> a[i].d;
	}
	go(1);
	cout << ans << '\n';
 
 
 
}
