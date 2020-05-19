#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int N;
    cin >> N;

    vector <int> v(N);

    for(int i =0;i <(int)v.size(); i ++){
        cin >> v.at(i);
    }

    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    cout << v.size() << endl;

    

    



    return 0;
    

}