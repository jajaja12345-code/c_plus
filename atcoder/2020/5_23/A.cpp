#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;

struct
{
    long long N;
    int A;
    int B;
    int C;
    int D;
} t[10];

int main()
{
    int T;
    /*
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> t[i].N >> t[i].A >> t[i].B >> t[i].C >> t[i].D;
    }
    */
    T = 1;
    t[0].N = 11;
    t[0].A = 1;
    t[0].B = 2;
    t[0].C = 4;
    t[0].D = 8;

    long long count = 0;
    long long temp_v = 0;
    double per_a, per_b, per_c;
    vector<int> rank(3);
    vector<int> value(6);
    vector<long long> ans(4);

    for (int i = 0; i < T; i++)
    {
        count = t[i].D;
        temp_v = 1;
        per_a = 2.0 / t[i].A;
        per_b = 3.0 / t[i].B;
        per_c = 5.0 / t[i].C;

        value.at(0) = t[i].A;
        value.at(1) = t[i].B;
        value.at(2) = t[i].C;
        value.at(3) = 2;
        value.at(4) = 3;
        value.at(5) = 5;

        if (per_a >= per_b && per_a >= per_c)
        {
            rank.at(0) = 0;
            if (per_b >= per_c)
            {
                rank.at(1) = 1;
                rank.at(2) = 2;
            }
            else
            {
                rank.at(1) = 2;
                rank.at(2) = 1;
            }
        }
        else if (per_b >= per_a && per_b >= per_c)
        {
            rank.at(0) = 1;
            if (per_a >= per_c)
            {
                rank.at(1) = 0;
                rank.at(2) = 2;
            }
            else
            {
                rank.at(1) = 2;
                rank.at(2) = 0;
            }
        }
        else
        {
            rank.at(0) = 2;
            if (per_a >= per_b)
            {
                rank.at(1) = 0;
                rank.at(2) = 1;
            }
            else
            {
                rank.at(1) = 1;
                rank.at(2) = 0;
            }
        }

        while (temp_v < t[i].N)
        {
            temp_v *= value.at(rank.at(0) + 3);
            count += value.at(rank.at(0));
        }
        ans.at(0) = count + (temp_v - t[i].N) * t[i].D; // 最後ひく
        temp_v /= value.at(rank.at(0) + 3);
        count -= value.at(rank.at(0));

        while (temp_v < t[i].N)
        {
            temp_v *= value.at(rank.at(1) + 3);
            count += value.at(rank.at(1));
        }
        ans.at(1) = count + (temp_v - t[i].N) * t[i].D; // 最後ひく
        temp_v /= value.at(rank.at(1) + 3);
        count -= value.at(rank.at(1));

        while (temp_v < t[i].N)
        {
            temp_v *= value.at(rank.at(2) + 3);
            count += value.at(rank.at(2));
        }
        ans.at(2) = count + (temp_v - t[i].N) * t[i].D; // 最後ひく
        temp_v /= value.at(rank.at(2) + 3);
        count -= value.at(rank.at(2));

        ans.at(3) = count + (t[i].N - temp_v) * t[i].D;

        sort(ans.begin(), ans.end());
        cout << ans.at(0) << endl;
    }

    return 0;
}