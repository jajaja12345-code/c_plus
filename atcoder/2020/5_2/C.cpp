#include <iostream>
using namespace std;


////////////////////////できてない///////////////////////////////////////////////


int main()
{
    int n,m,q;
    cin >> n >> m >> q;
    int a[q];
    int b[q],c[q],d[q];

    for(int i = 0;i <q;i ++){
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    int x = 1;
    for(int i = 1;i <= q;i ++){
        x *=　i;
    }

    int A[q][n][m];
    for (int i = 0; i < q; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for(int k = 0;k < m;k ++){
                A[i][j][k] = 0
            }
        }
        
    }





    

    return 0;
    

}