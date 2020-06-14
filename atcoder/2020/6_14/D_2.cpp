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
    vector<int> a(n);
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());

    vector<bool> b(a.at(n - 1) + 1, true);
    int temp = 0;
    int m;
    for (int i = 0; i < n; i++)
    {
        if (b.at(a.at(i)))
        {
            if (temp == a.at(i))
            {
                b.at(temp) = false;
            }
            temp = a.at(i);
            m = 2;
            while (temp * m <= a.at(n - 1))
            {
                b.at(temp * m) = false;
                m++;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (b.at(a.at(i)))
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}