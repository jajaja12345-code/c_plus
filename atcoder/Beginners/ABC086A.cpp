#include <iostream>
using namespace std;


int main(int argc,char *argv[]){

    int a,b;
    std::cin >> a >> b;
    if((a * b) % 2 == 0){
        std::cout << "even" << endl;
    }else{
        std::cout << "odd" << endl;
    }

    return 0;
}