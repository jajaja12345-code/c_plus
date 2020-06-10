#include <iostream>
using namespace std;


int main()
{
    
    

    int a,b;
    cin >> a >> b;

    int array[b];
    int sum = 0;

    for(int i = 0;i < b; i ++){
        cin >> array[i]; 
        sum += array[i];
    }


    if(a < sum){
        cout << "-1" << endl;
    }else{
        cout << a - sum  << endl;
    }





    return 0;
    

}