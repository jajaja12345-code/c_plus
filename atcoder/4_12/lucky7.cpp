#include <iostream>
//#include <typeinfo>
using namespace std;

int main(int argc,char* argv[]){
    int i;
    cin >> i;
    string a;
    a = to_string(i);

  //  cout << a << endl;
    
    const char* s = a.c_str();

    //cout << s << endl;
    //cout << *s << endl;
    //cout << &s << endl;

    //cout << typeid(s[2]).name() << endl;
    //cout << s[1] << endl;


    /*if('7' == s[2]){
        cout << "aaaaaaaaaaaa" << endl;
    }


*/
    int count = 0;


    for(int i = 0 ;i <= 2;i++){
  //      cout << "bbbbb" << endl;
   //     cout << typeid(s[i]).name() << endl;
        if('7' == s[i]){
            count ++;
     //       cout << "true" << endl;
        }
    
    }

    if(count >= 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}