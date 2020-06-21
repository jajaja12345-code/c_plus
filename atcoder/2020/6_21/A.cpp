#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>

typedef long long LL;

constexpr long long INFLL = 1e18;

using namespace std;

int main()
{
    char s;
    cin >> s;

    if (isupper(s))
    {
        cout << "A" << endl;
    }
    else if (islower(s))
    {
        cout << "a" << endl;
    }

    return 0;
}