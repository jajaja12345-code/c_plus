#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(b == 0){
        return a;
    }

    return gcd(b,a % b);
}

int main(int argc,char* argv[] ){
    int d;
    cin >> d;
    int answer = 0;
    for(int i = 1;i <= d;i ++){
        for(int l = 1;l <= d; l ++){
            for(int m = 1;m <= d;m ++){
                answer += gcd(gcd(i,l),m);
            }
        }
    }

    cout << answer << endl;
    return 0;
}