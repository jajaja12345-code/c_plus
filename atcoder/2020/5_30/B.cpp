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
    string T;
    cin >> T;

    int len = T.size();

    for (int i = 0; i < len; i++)
    {
        if (T.at(i) == '?')
        {
            T.at(i) = 'D';
        }
    }

    cout << T << endl;

    return 0;
}