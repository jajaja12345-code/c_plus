#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int N;
    cin >> N;

    string s = to_string(N);
    

    char s_size = s.at(s.size() - 1) ;

    if(s_size == '3'){
        cout << "bon" << endl;
    }else if(s_size == '0' || s_size == '1' || s_size ==  '6' || s_size ==  '8') {
        cout << "pon" << endl;
    }else{
        cout << "hon" << endl;
    }

    return 0;
    

}