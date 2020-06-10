#include <iostream>
using namespace std;


int main()
{
   

    int a,b;
    //cin  >> a >> b;
    a = 3;
    b = 2;
    a ++;
    int answer_a = 1;
    int answer_b = 1;
    long int answer = 0;
    int b_at = 0;

    for(int i = b;i <= a;i ++){
        answer_a = 1;
        answer_b = 1;
        b_at =  a;

        for (int l = 1; l <= i; l++)
        {
            answer_a *= l;
        }
        for (int m = 0; m < i; m++)
        {
            answer_b *= b_at;
            b_at --;
        }
        answer += answer_b / answer_a;
        
    }

    cout << answer << endl;
    

    return 0;
    

}