#include <iostream>
#include <regex>
using namespace std;

int main()
{
    /*
    // char* 版
    // regex_search の 最初の引数が 「const char*」
    std::cmatch cmatch;
    if (std::regex_search("sabc", cmatch, std::regex("^(abc|ABC)")))
    {
        // ここには来ないはず
    }
    */

    // string 版
    std::string str = "abc123def";
    //string str = "1234";

    std::smatch smatch;



    //std::cout << std::regex_search(str,smatch,std::regex("\^(abc)+$")) << std::endl;

    //cout << "smatch:" << smatch.str() << endl;

    if (std::regex_search(str, smatch, std::regex("\\d+")))
    //if (std::regex_search(str, smatch, std::regex("\\d+")))
    {
        std::cout <<  "exist" << std::endl;
    }else{
        std::cout << "don't exitst" << std::endl;
    }

/*
    // wstring 版
    std::wstring wstr = L"abc";
    std::wsmatch wmatch;
    if (std::regex_search(wstr, wmatch, std::wregex(L"^(abc|ABC)")))
    {
        // ここに来るはず
    }

    */

    return 0;
}