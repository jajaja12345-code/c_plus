#include <iostream>
#include <vector>
using namespace std;

struct A{
    int a,b,c,d;
}a[50];

int n,m,q;
int value,m_value;

vector <int> v;

void go(int x){
    if(v.size()  == n){
        value = 0;

        for(int i = 0;i < q;i ++){
            if(v[a[i].b - 1] - v[a[i].a - 1] == a[i].c){
                value += a[i].d;
            }
        }
        if(value > m_value){
            m_value = value;
        }


    }else{
        for(int i = x;i <= m;i ++){
        v.push_back(i);
        go(i);
        v.pop_back();
        }
    }
}


int main()
{
    cin >> n >> m >> q;

    m_value = 0;

    for(int i = 0;i < q;i ++){
        cin >> a[i].a >> a[i].b >> a[i].c >> a[i].d ;
    }

    go(1);

    cout << m_value << endl;




    



    return 0;
    

}