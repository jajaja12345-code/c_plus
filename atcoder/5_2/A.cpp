#include <iostream>
using namespace std;


int main()
{
    int k,a,b;
    cin >> k >> a >> b;
    int ans = 0;

    //int num_1,num_2; 
    //num_1  = a / k;
    //num_2 = b / k;
    for (int i = a;i <= b; i++)
    {
        if(i % k == 0){
            cout <<"OK" << endl;
            ans = 1;
            break;
        }

    }

    if(ans != 1){
        cout << "NG" << endl;
    }
    



    return 0;
    

}