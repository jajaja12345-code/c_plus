#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>

//////////////////////////間違い
///struct{処理}t[10001]は実行時エラーになる
///三重forで処理時間over

using namespace std;

struct
{
    int time;
    int x;
    int y;
} t[10001];

int judge(int temp_t, int temp_x, int temp_y)
{
    int cal_x, cal_y;
    for (int i = 0; i <= temp_t; i++)
    {
        for (int k = temp_t; k >= 0; k--)
        {
            for (int l = temp_t; l >= 0; l--)
            {
                int m = temp_t - i - k - l;
                if (m >= 0)
                {
                    cal_x = 0;
                    cal_y = 0;
                    cal_x += i;
                    cal_x -= k;
                    cal_y += l;
                    cal_y -= m;
                    if (cal_x == temp_x && cal_y == temp_y)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int main()
{
    int N;
    t[0].time = 0;
    t[0].x = 0;
    t[0].y = 0;

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> t[i].time >> t[i].x >> t[i].y; //t.at(i)の書き方はできない　tは配列ではないから　t[0]..t[10000]という型
    }

    /*
   N = 2;
   t[1].time = 3;
   t[1].x = 1;
   t[1].y = 2;
   t[2].time = 6;
   t[2].x = 1;
   t[2].y = 1;
   */

    int check = 1;
    for (int i = 1; i <= N; i++)
    {
        if (judge(t[i].time - t[i - 1].time, t[i].x - t[i - 1].x, t[i].y - t[i - 1].y) != 1)
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}