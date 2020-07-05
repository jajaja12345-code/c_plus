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
    int n;
    cin >> n;

    while (n > 0)
    {
        n -= 1000;
    }
    if (n < 0)
    {
        n *= -1;
    }

    cout << n << endl;

    return 0;
}