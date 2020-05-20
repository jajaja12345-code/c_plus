#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>

using namespace std;


int main()
{

    //0~2^3までの数の2進数表記の全列挙
    for(int i = 0;i < (1 << 3);i ++){
        bitset <3> tem(i);
        cout << tem << endl;
    }


    //全列挙の応用
    vector <string> v = {"a","b","C"};
    string ans ="";
    for(int i = 0;i < (1 << 3);i ++){
        bitset <3> tem(i);
        for(int l = 0;l < 3;l ++){
            if(tem.test(l)){
                ans += v.at(l); 
            }
        }
        cout << ans << endl;
        ans = "";
    }

    return 0;
    

}