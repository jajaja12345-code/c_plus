#include <iostream>
using namespace std;

int main(int argc,char* argv[]){
    int number;
    cin >> number ;

    const int cNumber = number;

    //cout << "cNumber " << cNumber << endl;
    int array[cNumber];
    for(int i = 0;i <= cNumber - 1;i ++){
        cin >> array[i];
      //  cout << "array[i] " << array[i] << endl;
    }

    int judge = 1;
    int count = 0;
    while(judge == 1){
        for(int i = 0;i <= cNumber - 1;i ++){
            if(array[i] % 2 == 1){
                //cout << "breakしました" << endl;
                //break;  breakはforしか抜けれない
                judge = 0;
            }else{
                array[i] /= 2;
            }
        }
        if(judge == 1){
            count ++;
        }

        //cout << count << endl;
    }

    cout << count << endl;

    return 0;
}