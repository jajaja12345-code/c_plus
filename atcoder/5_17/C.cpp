#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;


int main()
{
    int A,B,H,M;
    cin >> A >> B >> H >> M;

  


//    double time = round((H + M / 60.0) * 10000000000) / 10000000000;
    double time = H + M / 60.0;
    double h_time = 30.0 * time;
    double m_time = 360.0 * time;
    const double max_angle = 360.0;


    double h_angle = fmod(h_time,max_angle);
    double m_angle = fmod(m_time,max_angle);
    

    double angle = h_angle - m_angle;
    if(angle < 0){
        angle *= -1;
    }

    if(angle > 180){
        angle = 360 - angle;
    }

    double ans;

    //const double pi = 3.141592653589793;
    const double pi = acos(-1.0); //こっちの方が有効数字が大きい
    
    angle = angle / max_angle;
    angle = 2 * pi * angle;

    //ans = sqrt(A * A  + B * B - 2 * A * B * cos(angle));  変わらない
    ans = sqrt(pow(A,2)  + pow(B,2) - 2 * A * B * cos(angle));
    printf("%.32lf\n", ans); 

    //cout << ans << endl;

    return 0;
    

}