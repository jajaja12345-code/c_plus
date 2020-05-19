#include <iostream>
using namespace std;


////////////////////////できてない///////////////////////////////////////////////

int main()
{
    long long x;
    cin >> x;

    int count = 0;
    int money = 100;

    while(x > money){
        /*money *= 1.01;
        money /= 1;*/
        money += money/100;
        count ++ ;
    }
    
    
/*

    for (int i = 0; i < 3760; i++)
    {
        money *= 1.01;
        money /= 1;
        count ++ ;
        if(x <= money){
            break;
        }
    }
*/
    

    cout << count << endl;

    return 0;
    

}