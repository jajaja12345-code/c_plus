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

    long long test = INF;

    cout << "床関数" << endl;

    cout << floor(test / 5) << endl;
    cout << (test / 5) << endl;

    cout << "天床関数" << endl;
    cout << ceil(test / 5) << endl;
    cout << ((test + 4) / 5) << endl;

    return 0;
}