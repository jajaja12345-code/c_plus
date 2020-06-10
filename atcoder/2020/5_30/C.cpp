#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>

//////////////////////////////////////////////TLE

typedef long long LL;

const long long INF = 1LL << 60;

using namespace std;

int N;
bool check = 0;

void xx(vector<LL> &A, vector<LL> &x, int count)
{

    if (check == 1 || count > N)
    {
        return;
    }

    LL temp = x.at(count - 1) * 2;
    LL sum_A = 0;
    for (int i = count; i <= N; i++)
    {
        sum_A += A.at(i);
    }
    while (temp >= x.at(count - 1))
    {

        if (temp - A.at(count) >= 0 && check == 0)
        {
            if (temp <= sum_A)
            {
                if (count == N && temp - A.at(count) == x.at(count))
                {

                    check = 1;
                    return;
                }
                else
                {
                    x.at(count) = temp - A.at(count);
                    xx(A, x, count + 1);
                }
            }
        }
        else
        {
            return;
        }
        temp--;
    }
}

int main()
{
    cin >> N;
    vector<LL> A(N + 1);
    vector<LL> x(N + 1, 0);

    for (int i = 0; i <= N; i++)
    {
        cin >> A.at(i);
    }

    x.at(0) = 1;
    x.at(N) = 0;

    if (A.at(0) == 0 || (A.at(0) == 1 && N == 0))
    {
        xx(A, x, 1);
    }

    LL ans = 0;
    if (check == 1)
    {
        for (int i = 0; i <= N; i++)
        {
            ans += x.at(i) + A.at(i);
            //cout << "深さ" << i << ':' << x.at(i) + A.at(i) << endl;
        }
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}