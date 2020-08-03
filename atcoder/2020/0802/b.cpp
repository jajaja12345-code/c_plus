#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>
#include <queue>

constexpr long long INFLL = 1e18;

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{

    int n;
    ll d;
    cin >> n >> d;

    ll a, b;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (d * d >= a * a + b * b)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}