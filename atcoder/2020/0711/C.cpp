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
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        ans = 0;
        for (int a = 1; a < sqrt(i); a++)
        {
            for (int b = a; b < sqrt(i); b++)
            {
                int temp = i - a * a - b * b - a * b;
                if (temp >= 1)
                {
                    for (int c = b; c < sqrt(temp); c++)
                    {
                        if (c * c + c * (a + b) == temp)
                        {
                            if (c == a && b == a)
                            {
                                ans++;
                            }
                            else if (c != a && c != b && a != b)
                            {
                                ans += 6;
                            }
                            else
                            {
                                ans += 3;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}