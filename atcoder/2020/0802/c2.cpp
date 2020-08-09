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
#include <set>

constexpr long long INFLL = 1e18;

using namespace std;
using ll = long long;
using P = pair<int, int>;

int main()
{
    int k;
    cin >> k;
    int surplus = 7 % k;
    set<int> s;
    int count = 1;
    while (s.count(surplus) == 0) {
        if (surplus == 0) {
            break;
        }
        s.insert(surplus);
        surplus = (surplus * 10 + 7) % k;
        count++;


    }
    if (surplus > 0) {
        count = -1;
    }

    cout << count << endl;

    return 0;
}