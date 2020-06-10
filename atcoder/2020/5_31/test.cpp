
#include <iostream>

using namespace std;

int main()
{
    long long a = 1e18;
    long long b = 1000000000000000000;
    long long e = 1000000000000000001;

    cout << typeid(1e18).name() << endl;

    cout << "1e18を変数に入れない" << endl;

    cout << (1e18 < e) << endl;
    cout << (1e18 > e) << endl;
    cout << (1e18 == e) << endl;

    cout << "1e18をlong long型の変数にいれる" << endl;

    cout << (a < e) << endl;
    cout << (a > e) << endl;
    cout << (a == e) << endl;

    return 0;
}
