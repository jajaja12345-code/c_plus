#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main()
{
    int N,Y;
    cin >> N >> Y;

    int i,l,k,check;
    check = 0;

    for(i = 0;i <= N;i ++){
        for(l = 0 ;l <= N;l ++){
            if(l + i > N){
                break;
            }
            for(k = 0 ;k <= N;k ++){
                if(l + k + i > N){
                    break;
                }
                if(i  + l  + k  == N && 10000 * i + 5000 * l + k * 1000 == Y ){
                    cout << i << " " << l << " " << k << endl;
                    check = 1;
                    break;
                }
            }
            if(check == 1){
                break;
            }
        }
        if(check == 1){
            break;
        }
    }

    if(check == 0){
        cout << "-1 -1 -1" <<endl;
    }



    
    return 0;
    

}