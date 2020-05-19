#include<iostream>
using namespace  std;

void Func( int *p ) // pはポインタ
{
    cout << p << endl;
    cout << *p << endl;
    p ++;
    cout << *p << endl;

    int s1 = sizeof( p ); 
    int s2 = sizeof( *p );
    int s3 = sizeof( p ) / sizeof( *p ); 
}

int main()
{
    int p[] = { 1,2,3,4,5 }; // pは配列の先頭要素へのポインタ
    cout << p << endl;
    Func(p);
}

