#include <iostream>
using namespace std;

int main(int argc,char* argv[] ){
    int a;
    cin >> a;

    long sum = 0;
    for(int i = 1;i <= a;i ++){
        if((i % 3 != 0) &&  (i % 5 != 0)){
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}