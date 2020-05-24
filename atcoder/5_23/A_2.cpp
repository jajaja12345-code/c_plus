#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>

const long long INF = 1LL << 60;
typedef long long LL;

using namespace std;

LL A, B, C, D;
std::map<LL, LL> number;

LL solve(LL N)
{

    if (N == 0)
    {
        return 0;
    }

    if (N == 1)
    {
        return D;
    }

    if (number.count(N))
    {
        return number[N];
    }
    LL minimum = INF;

    LL f2 = (N / 2) * 2;
    LL r2 = ((N + 1) / 2) * 2;
    LL f3 = (N / 3) * 3;
    LL r3 = ((N + 2) / 3) * 3;
    LL f5 = (N / 5) * 5;
    LL r5 = ((N + 4) / 5) * 5;

    if (N < minimum / D)
    {
        minimum = N * D;
    }

    minimum = min(minimum, A + llabs(N - f2) * D + solve(f2 / 2));
    minimum = min(minimum, A + llabs(N - r2) * D + solve(r2 / 2));
    minimum = min(minimum, B + llabs(N - f3) * D + solve(f3 / 3));
    minimum = min(minimum, B + llabs(N - r3) * D + solve(r3 / 3));
    minimum = min(minimum, C + llabs(N - f5) * D + solve(f5 / 5));
    minimum = min(minimum, C + llabs(N - r5) * D + solve(r5 / 5));

    number[N] = minimum;

    return minimum;
}

int main()
{
    int T;
    cin >> T;
    //T = 1;
    LL N;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> A >> B >> C >> D;
        number.clear();
        /*
        N = 11;
        A = 1;
        B = 2;
        C = 4;
        D = 8;
        */
        cout << solve(N) << endl;
    }

    return 0;
}