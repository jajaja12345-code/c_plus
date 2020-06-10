#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>

typedef long long LL;

constexpr long long INFLL = 1e18;

using namespace std;

int posi = 1e6 + 1;

int xx(string s, int l)
{
    int abso = 0;
    int n = s.size();
    int x_0 = 0;
    int x_1 = 0;
    if (posi < n)
    {
        n = posi;
    }
    for (int i = l; i <= n; i++)
    {
        if (s.at(i - 1) == '?')
        {
            if (x_0 <= x_1)
            {
                x_0++;
            }
            else
            {
                x_1++;
            }
        }
        else if (s.at(i - 1) == '0')
        {
            x_0++;
        }
        else
        {
            x_1++;
        }
        if (abso < abs(x_0 - x_1))
        {
            posi = i;
            abso = abs(x_0 - x_1);
        }
    }

    return abso;
}

int main()
{

    string s;
    cin >> s;

    int n = s.size();

    int max = 0;
    int temp;

    for (int i = 1; i <= n; i++)
    {
        temp = xx(s, i);
        if (max < temp)
        {
            max = temp;
        }
    }

    cout << max << endl;
    return 0;
}