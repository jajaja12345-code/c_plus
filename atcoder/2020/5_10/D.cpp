#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
    int N;
    long long K;
    vector <int> A;
    int temp;

    cin >> N >> K;

    //N = 4;
    //K = 5;
    //int a[] = {3,2,4,1};


    for(int i =0;i < N;i ++){
        cin >> temp;
        A.push_back(temp);
        //A.push_back(a[i]);
    }

    int point = 0;
/*
    while(K > 0){
        point = A.at(point) - 1;
        K --;
    }
    */

   vector <int> r(N,-1);
   r.at(0) = 0;
   int k = 0;
   int check = 0;
   while (K > k)
   {
       k++;
       point = A.at(point) - 1;
       if(r.at(point) != -1){
           check = 1;
           break;
       }
       r.at(point) = k;
   }

   int loop;


   if(check == 1){
       loop = k - r.at(point);
       temp = (K - r.at(point)) % loop;
       while(temp > 0){
           point = A.at(point) - 1;
           temp --;
       }
       cout << point + 1 << endl;
   }else{
       cout << point + 1 << endl;
   }


    return 0;
    

}