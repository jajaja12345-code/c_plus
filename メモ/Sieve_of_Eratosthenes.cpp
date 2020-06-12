#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <stdio.h>
#include <bitset>

typedef long long LL;

constexpr long long INFLL = 1e18;

using namespace std;

vector<bool> prime;

void judge_prime(int N)
{
    if (N + 1 > prime.size())
    {
        prime.resize(N + 1, true);
    }
    prime.at(0) = false;
    prime.at(1) = false;

    for (size_t i = 2; i <= sqrt(N); i++)
    {
        if (prime.at(i))
        {
            for (size_t j = 2; j * i <= N; j++)
            {
                prime.at(i * j) = false;
            }
        }
    }
}

int main()
{
    int N;
    cin >> N;

    judge_prime(N);

    for (size_t i = 0; i < prime.size(); i++)
    {
        if (prime.at(i))
        {
            cout << i << endl;
        }
    }

    return 0;
}