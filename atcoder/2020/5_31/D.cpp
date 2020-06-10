#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>

typedef long long LL;

const long long INF = 1LL << 60;

using namespace std;

bool IsPrime(int num)
{
    if (num < 2)
        return false;
    else if (num == 2)
        return true;
    else if (num % 2 == 0)
        return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main()
{
    int N;
    cin >> N;
    //N = 24;

    int count = 0;
    int ans = 0;
    int temp = 0;

    for (int i = 2; i <= N; i++)
    {
        if (IsPrime(i))
        {
            temp = 0;
            count = 0;
            while (N % i == 0)
            {
                count++;
                N /= i;
            }
            for (int k = 1;; k++)
            {
                temp += k;
                if (count < temp)
                {
                    break;
                }
                else
                {
                    ans++;
                }
            }
        }
        else
        {
            continue;
        }
    }

    cout << ans << endl;

    return 0;
}