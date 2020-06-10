#include <iostream>
#include <string>
using namespace std;

int main(int argc,char* argv[]){
    string s;
    cin >> s;

    if(s.find('7') != string::npos){  //sの中に'7'が存在しなかったらnposを返す
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}