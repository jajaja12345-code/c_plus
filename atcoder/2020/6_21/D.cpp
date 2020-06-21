#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>

typedef long long ll;

constexpr long long INFLL = 1e18;

using namespace std;

int main()
{
    map<int, int> m;
    int n;
    cin >> n;
    int temp;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        sum += temp;
        m[temp]++;
    }
    int q;
    cin >> q;
    cout << endl;
    int count;
    int b, c;
    while (q > 0)
    {
        cin >> b;
        cin >> c;

        count = m[b];
        m[b] = 0;
        m[c] += count;
        sum = sum + (c - b) * count;
        /*m[c] += m[b];
        sum = sum + (c - b) * m[b];
        m.erase(b);*/
        cout << sum << endl;
        q--;
    }

    return 0;
}