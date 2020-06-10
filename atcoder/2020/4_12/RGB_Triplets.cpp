#include <iostream>
using namespace std;



int main(int argc,char* argv[]){
    int n;
    //n = 4;
    cin >> n;
    string a;
    //a = "rrgb";
    cin >> a;
    const char* s = a.c_str();

    /*
    if ((s[1 - 1] != s[3 - 1]) && (s[3 - 1] != s[4 - 1])&& (s[1 - 1] != s[4 - 1]))
    {
        if((3 - 1) != (4 - 3)){
        cout << "true" << endl;
        }
    }
    */
    



    int i,j,k;
    int answer = 0;
    i = 1;
    j = 2;
    k = 3;

    for(i = 1;i < j;i ++){
        for(j = i + 1;j < k;j ++){
            for(k = j + 1;k <= n;k ++){
                //cout << i << " "  << j << " " << k << endl;
                if ((s[i - 1] != s[j - 1]) && (s[j - 1] != s[k - 1]) && (s[i - 1] != s[k - 1]))
                {
                    //cout << "aaaaaa" << endl;
                    if((j- i) != (k - j)){
                      //  cout << "bbbbbbb" << endl;
                        answer ++;
                    }       
                }
                
            }
        }
    }

    cout << answer << endl;



    return 0;
}