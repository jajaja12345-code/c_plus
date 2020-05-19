#include <iostream>
using namespace std;


int main()
{
    int N;
    cin >> N;
    int array[N];
    int answer[N];
    answer[0] = 0;
    for(int i = 1;i < N ; i ++){
        answer[i] = 0;
        cin >> array[i];
        answer[array[i] - 1] ++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << endl;
    }

    

    



    

    return 0;
    

}