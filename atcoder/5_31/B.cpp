#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>

typedef long long LL;

const long long INF = 1LL << 60;

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<LL> A(N);

    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }

    sort(A.begin(), A.end());

    if (A.at(0) == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    LL ans = 1;
    while (N > 0)
    {
        //if (ans > 1e18)  これだとifの中に入らないになる
        if (ans > 1000000000000000000 / A.at(N - 1))
        {
            cout << -1 << endl;
            return 0;
        }
        else
        {
            ans *= A.at(N - 1);
        }

        N--;
    }

    cout << ans << endl;

    return 0;
}