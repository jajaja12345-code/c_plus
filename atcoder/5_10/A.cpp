#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    string S,T;

    cin >> S >> T;

    //cout << S.size() << endl;
    T.erase(T.size()-1,1);

    if(S == T){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    


    return 0;
    

}