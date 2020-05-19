#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct{
    int c;
    vector <int> A;
}stru[12];

int N,M,X;
vector <int> sum(M);
int ans = -1;

void go(int temp_2){
    
}

int main()
{
    cin >> N >> M >> X;

    int temp;

    for(int i = 0;i < N;i ++){
        cin >> stru[i].c;
        for(int k = 0;k < M;k ++){
            cin >> temp;
            stru[i].A.push_back(temp);
        }
    }

    int i = 1;

    while(i <= N){
        go(i);
        i ++;
    }



    return 0;
    

}