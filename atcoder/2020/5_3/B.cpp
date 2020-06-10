#include <iostream>
using namespace std;


int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];
    //int arr[n] = {0};
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    

    for(int i = 1;i <= k;i ++){
        int d;
        cin >> d;
        
        int num;
        for (int k = 0; k < d; k++)
        {
            cin >> num;
            arr[num - 1] = 1;
        }
        
    }

    int count = 0;

    for(int i = 0;i < n;i ++){
        if(arr[i] == 0){
            count ++;
        }
    }

    cout << count << endl;


    return 0;
    

}