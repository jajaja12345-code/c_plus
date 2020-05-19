#include <iostream>
using namespace std;


int main()
{
/*    int n,m;

    cin >> n >> m;

    int a[n];

    for(int i = 0;i < n;i ++){
        cin >> a[n];
    }
    */

   int a[3] = {1,3,5};
   int n = 3;
   int m = 10;



    int answer = 0; 

    
        for (int i = 0; i < n; i++)
        {
            for (int k = 0; k < n; k++)
            {
                for (int p = 0; p < n; p++)
                {
                    for (int o = 0; o < n;o ++)
                    {
                        if(a[i] + a[k] + a[p] + a[o] == m){
                            answer = 1;
                            goto testA;
                        }
                    }
                    
                }
                
            }
            
        }

        testA:

    if(answer == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
        
    

    

    return 0;
    

}