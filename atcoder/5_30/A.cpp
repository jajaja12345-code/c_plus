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
    int H1, M1, H2, M2, K;

    cin >> H1 >> M1 >> H2 >> M2 >> K;

    M1 += 60 * H1;
    M2 += 60 * H2;

    cout << M2 - M1 - K << endl;

    return 0;
}