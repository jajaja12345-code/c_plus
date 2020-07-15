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

int f(int temp)
{
    if (temp == 0)
    {
        return 0;
    }
    else
    {
        return f(temp % __builtin_popcount(temp)) + 1;
    }
}

int main()
{

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> x(n);
    int pc = 0;
    for (int i = 0; i < n; i++)
    {
        x.at(i) = s.at(i) - '0';
        if (x.at(i))
        {
            pc++;
        }
    }

    vector<int> ans(n);

    for (int i = 0; i < 2; i++)
    {
        int pc2 = pc;
        if (i == 0)
        {
            pc2++;
        }
        else
        {
            pc2--;
        }
        if(pc2 <= 0){
            continue;
        }
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = (sum * 2) % pc2;
            sum += x.at(j);
        }
        int temp = 1;
        int temp2;
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == 0)
            {
                if (x.at(j) == 0)
                {
                    temp2 = (sum + temp) % pc2;
                    ans.at(j) = f(temp2) + 1;
                }
            }
            else
            {
                if (x.at(j) == 1)
                {
                    temp2 = (sum - temp + pc2) % pc2;
                    ans.at(j) = f(temp2) + 1;
                }
            }
            temp = (temp * 2) % pc2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans.at(i) << endl;
    }

    return 0;
}