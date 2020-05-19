#include <iostream>
#include <vector>
using namespace std;

int main(void){

    string a = "dddd";
    
    cout << a[0] << endl;
    cout << a[3] << endl;

    //vector <int> c   (5,1);
    vector <int> c = {1,2,3,4,5};

    for(int i:c){
        cout <<  i  << endl;
    }
 

    return 0;
}