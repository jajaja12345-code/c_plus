#define _LIBCPP_DEBUG 0

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int N,A,B;
    cin >> N >> A >> B;

    int sum,temp;
    int ans = 0;

    for(int i = 1;i <= N;i ++){
        sum =0;
        temp = i;
        while(temp != 0){
            sum += temp % 10;
            temp /= 10; 
        }
        if(sum >= A && sum <= B){
            ans += i;
        }
    }

    cout << ans << endl;


    return 0;
    

}