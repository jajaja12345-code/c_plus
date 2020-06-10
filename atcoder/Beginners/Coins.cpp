#include <iostream>
using namespace std;

int main(int argc,char* argv[]){
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int a_int,b_int,c_int;
    int ans = 0;

    a_int = x / 500;
    b_int = x / 100;
    c_int = x / 50;
    if(a_int > a){
        a_int = a;
    }
    if(b_int > b)b_int = b;
    if(c_int > c)c_int = c;

    for(int i = 0;i <= a_int;i++){
        for(int j = 0;j <= b_int;j ++){
            for(int k = 0;k <= c_int;k ++){
                if((500 * i + 100 * j + 50 * k) == x){
                    ans ++;
                }
            }
        }
    }

    cout << ans << endl;





    return 0;
}