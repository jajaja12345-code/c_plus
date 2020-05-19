#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int N;
    cin >> N;

    vector <int> v(0); 
    int temp;
    for(int i=0;i < N;i ++){
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(),v.end(),greater <int>());

    int sum_A,sum_B;
    sum_A = 0;
    sum_B = 0;

    for(int i =0;i < N;i ++){
        if(i % 2 == 0){
            sum_A += v.at(i);
        }else{
            sum_B += v.at(i);
        }
    }

    cout << sum_A - sum_B << endl;



    return 0;
    

}