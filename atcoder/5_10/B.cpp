#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int A,B,C,K;

    cin >> A >> B >> C >> K;

    int sum = 0;
/*
    while (K > 0)
    {
        if(A > 0 ){
            sum ++;
            A --;
            K --;
            
        }else if(B > 0){
        
            B --;
            K --;
            
        }else{
            C --;
            K --;
            sum --;
        }
    }
    */
   while(A > 0 && K > 0){
       sum ++;
       A --;
       K --;
   }
   while(B > 0 && K > 0){
       B --;
       K --;
   }
   while(C > 0 && K > 0){
       sum --;
       C --;
       K --;
   }


    cout << sum << endl;
    

    return 0;
    

}