#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int past_time, past_x, past_y;
    past_time = 0;
    past_x = 0;
    past_y = 0;
    int temp_time, temp_x, temp_y;

    int now_time, now_x, now_y;
    bool check = true;

    for (int i = 0; i < N; i++)
    {
        cin >> now_time >> now_x >> now_y;
        temp_time = now_time - past_time;
        temp_x = abs(now_x - past_x);
        temp_y = abs(now_y - past_y);
        if (temp_time < (temp_x + temp_y) || (temp_time - temp_x - temp_y) % 2 != 0)
        {
            check = false;
            break;
        }
        past_time = now_time;
        past_x = now_x;
        past_y = now_y;
    }

    if (check)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}