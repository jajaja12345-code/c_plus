#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;



int main()
{
    string S;
    cin >> S;
    const string dr = "maerd";//"dream";
    const string drer = "remaerd";//"dreamer";
    const string er = "esare";//"erase";
    const string erer = "resare";//"eraser";

    reverse(S.begin(),S.end());

    //cout << S << endl;

    string::size_type pos = 8;//最初から7番目の要素までは最初に検索するから
    string result = S.substr(0,7); //S="sd"の時はsdを返す
    string temp_word = "";

    if(result.find(drer) != string::npos){
          pos = result.find(drer);
          temp_word = drer;
        }      
    if(result.find(drer) == string::npos && result.find(dr) != string::npos){
      pos = result.find(dr);
      temp_word = dr;
    }
    if(result.find(erer) != string::npos){
      pos = result.find(erer);
      temp_word = erer;
    }
    if(result.find(erer) == string::npos && result.find(er) != string::npos){
      pos = result.find(er);
      temp_word = er;
    }

    string::size_type temp = 8;
    string::size_type temp_len;

    while (pos != temp)
    {
      temp_len = pos + temp_word.length();
      if(temp_len >= S.size()){
        break;
      }

      temp = pos;
      result = S.substr(temp_len,7);

      //if(result.find(drer,temp_len) != string::npos){
      if(result.find(drer) != string::npos){
          pos = result.find(drer) + temp_word.length();
          temp_word = drer;
          continue;
      }
      if(result.find(drer) == string::npos && result.find(dr) != string::npos){
        pos = result.find(dr) + temp_word.length();
        temp_word = dr;
        continue;
      }
      if(result.find(erer) != string::npos){
        pos = result.find(erer) + temp_word.length();
        temp_word = erer;
        continue;
      }
      if(result.find(erer) == string::npos && result.find(er) != string::npos){
        pos = result.find(er) + temp_word.length();
        temp_word = er;
        continue;
      }
    }

    if(temp == pos){
      cout << "NO" << endl;
    }else{
      cout << "YES" <<  endl;
    }
    
    

    

    return 0;
    

}