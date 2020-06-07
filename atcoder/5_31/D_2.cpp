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

map<LL, LL> v;

void isPrime(LL N, LL temp)
{
    LL n = N;
    for (LL i = temp; i <= sqrt(N); i++)
    {
        LL count = 0;

        while (n % i == 0)
        {
            count++;
            n /= i;
        }
        if (count)
        {
            v[i] = count;
        }
    }
    if (n != 1)
    {
        v[N] = 1;
    }
}

int main()
{
    LL N;
    cin >> N;
    if (N == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    isPrime(N, 2);

    LL count = 0;
    LL temp, sum;
    sum = 0;

    for (LL i = 2; i <= sqrt(N); i++)
    {
        if (v.count(i))
        {
            sum = 0;
            temp = v.at(i);
            for (int k = 1;; k++)
            {
                sum += k;
                if (sum > temp)
                {
                    break;
                }
                count++;
            }
        }
    }

    if (v.count(N))
    {
        count++;
    }

    cout << count << endl;

    return 0;
}