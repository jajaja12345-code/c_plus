#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <map>



//////////////////////////////////////////////できてない

typedef long long LL;

const long long INF = 1LL << 60;

using namespace std;

int N;
bool check = 0;

void xx(vector<LL> &A, vector<LL> &x, int count)
{

    if (check == 1)
    {
        return;
    }

    LL temp = x.at(count - 1) * 2;
    while (temp >= x.at(count - 1))
    {
        if (temp - A.at(count) > 0)
        {
            if (count == N)
            {
                if (temp - A.at(count) == x.at(count))
                {
                    check = 1;
                    return;
                }
            }
            else
            {
                x.at(count) = temp - A.at(count);
                xx(A, x, count + 1);
            }
        }
        else
        {
            break;
        }
        temp--;
    }
}

int main()
{
    //cin >> N;
    N = 4;
    vector<LL> A(N + 1);
    vector<LL> x(N + 1, 0);
    /*
    for (int i = 0; i <= N; i++)
    {
        cin >> A.at(i);
    }
    */
    A.at(0) = 0;
    A.at(1) = 0;
    A.at(2) = 1;
    A.at(3) = 0;
    A.at(4) = 2;

    x.at(0) = 1;
    x.at(N) = 0;

    xx(A, x, 1);

    LL ans = 0;
    for (int i = 0; i <= N; i++)
    {
        ans += x.at(i) + A.at(i);
        cout << "深さ" << i << ':' << x.at(i) + A.at(i) << endl;
    }
    cout << ans << endl;

    return 0;
}