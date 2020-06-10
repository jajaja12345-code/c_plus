#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    ifstream ifs("same_01.txt");
    cin.rdbuf(ifs.rdbuf());

    int n,m;
    cin >> n >> m;
    int H[n];

    for(int i = 0;i < n;i ++){
        cin >> H[i];
    }

    cout << "rrrrrrrrrrrrrrrrrrrr" << endl;


    int root[n][n];

    cout << "xxxxxxxxxxxxxxxxxx" << endl;
    
    for(int i = 0;i < n;i ++){
        cout << "aaaaa" << endl;


        for(int k = 0;k < n; k ++){
            root[i][k] = 0;
        }
    }


    cout << "/////////////////////////////////" << endl;
    

    int a,b;

    for(int i = 0;i < m; i ++){
        cin >> a >> b;
        root[a- 1][b - 1] = 1;
        root[b - 1][a - 1] = 1;


        cout << "a:" << a <<" b:" << b << endl;



    }

    int ans = 0;

    for(int i = 0;i < n;i ++){
        ans ++;
        for(int k = 0;k < n;k ++){

            if(root[i][k] == 1){
                if(H[i] <= H[k]){
                    ans --;
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
    

}