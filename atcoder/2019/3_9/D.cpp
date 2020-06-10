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
    LL A, B;
    cin >> A >> B;

    bitset<64> ans(A);

    for (LL i = A + 1; i <= B; i++)
    {
        bitset<64> bsA(i);
        ans = ans ^ bsA;
    }

    cout << ans.to_ulong() << endl;

    return 0;
}