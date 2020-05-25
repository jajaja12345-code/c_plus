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

    int L, n;

    //cin >> L >> n;
    L = 10;
    n = 3;
    vector<int> x(n);
    /*
    for (int i = 0; i < n; i++)
    {
        cin >> x.at(i);
    }
    */
    x.at(0) = 2;
    x.at(1) = 6;
    x.at(2) = 7;

    sort(x.begin(), x.end());

    int mini = 0;
    int max_l = 0;
    int temp;

    for (int i = 0; i < n; i++)
    {
        temp = min(abs(x.at(i) - 0), abs(x.at(i) - L));
        if (mini < temp)
        {
            mini = temp;
        }
        temp = max(abs(x.at(i) - 0), abs(x.at(i) - L));
        if (max_l < temp)
        {
            max_l = temp;
        }
    }

    cout << mini << endl;
    cout << max_l << endl;

    return 0;
}