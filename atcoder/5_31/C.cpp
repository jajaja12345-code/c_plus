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
    LL A;
    cin >> A;

    double B;
    cin >> B;

    int C = B * 100 + 0.5;

    A *= C;
    A /= 100;

    cout << A << endl;

    return 0;
}