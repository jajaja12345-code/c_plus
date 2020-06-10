#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>



////////////////////////////不正解

using namespace std;


/*実行時間的にむり
string S;
vector <string> lang_set = {"dream","dreamer","erase","eraser"};
bool check = false;

void make_string(string ans_string){
  if(ans_string.size() >= S.size()){
    if(ans_string == S){
      cout << "YES" << endl;
      check = true;
      return;
    }    
  }else{
    for(int i = 0;i < 4;i ++){
      int string_bigin,string_out;
      string_bigin = ans_string.size();
      ans_string += lang_set.at(i);
      string_out = ans_string.size();

      if(string_out <= S.size()){
      make_string(ans_string);
      }
      ans_string.erase(string_bigin,string_out);
    }
  }
}

*/

int main()
{
    string S;
    cin >> S;
    //S = "erasedream";
    //S = "dreameraser";
    //S = "dreameraser";
/*
    vector <string> lang_set = {"dream","dreamer","erase","eraser"};

*/
    const string dr = "dream";
    const string drer = "dreamer";
    const string er = "erase";
    const string erer = "eraser";

    //string ans_string = "";
    /*
    make_string(ans_string);

    if(check == false){
      cout << "NO" << endl;
    }
    */





    string::size_type pos = 8;//最初から7番目の要素までは最初に検索するから
    string result = S.substr(0,7); //S="sd"の時はsdを返す
    string temp_word = "";

    if(result.find(drer) != string::npos){
        if(S.substr(0,10).find("dreamerase") != string::npos){
          pos = result.find(dr);
          temp_word = dr;
        }else{
          pos = result.find(drer);
          temp_word = drer;
        }      
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
        if(S.substr(temp_len,10).find("dreamerase") != string::npos){
          pos = result.find(dr) + temp_word.length();
          temp_word = dr;
          continue;
        }else{
          pos = result.find(drer) + temp_word.length();
          temp_word = drer;
          continue;
        }
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