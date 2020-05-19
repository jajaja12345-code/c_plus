#include <iostream>
using namespace std;


int main()
{
    
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i ++){
        cin >> a[i];
    }
    
    

    
    int sum =  0;
    int max_side,rest;
    int ans = 0;

    for(int i = 0;i < n; i ++){
        for (int  k = i + 1; k < n; k++)
        {
            for(int l = k + 1;l < n; l ++){
                max_side = max(a[i],max(a[k],a[l]));
                sum = a[i] + a[k] + a[l];
                rest = sum - max_side;
                if(max_side < rest){
                    ans = max(sum,ans);
                }

            }
        }
        
    }


/*
    for (int i = 0; i < n - 2; i++)
    {
        for(int k = i + 1;k < n- 1;k ++){
            for (int p = k + 1; p < n; p++)
            {

                
                if(a[i] <= a[k] + a[p] && a[k] <= a[i] + a[p]&& a[p] <= a[i] + a[k]){
                    if(sum < a[k] + a[p] + a[i]){
                        sum = a[k] + a[p] + a[i];
                    }
                }
            }
            
        }
    }
    */

    cout << "周長は:" << ans << endl;
    

    return 0;

}