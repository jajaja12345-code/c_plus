#include <iostream>
#include <typeinfo>
using namespace std;


int main(int argc,char *argv[]){
    char a[3];
    cin >> a[0] >> a[1] >> a[2];
    //cout << a[0] << " " << a[1] << " " << a[2]  << endl;

    int count = 0;

    //cout << "a[0]" << " " << typeid(a[0]).name() << endl;
    //cout << "a" << " " << typeid(a).name() << endl;
    //cout << "1" << " " << typeid("1").name() << endl;
    //cout << "2" << " " << typeid("2").name() << endl;
    //cout << "a" << " " << typeid("a").name() << endl;
    //const char b = 'a'; //1文字の時はシングルくウォーテーション
    //cout << "char b" << " " << typeid(a).name() << endl; 



    for(int i = 0;i <= 2;i ++){
        if( '1' == a[i]){
            count ++;
        }
    }
    
    cout << count << endl;
    return 0;
}