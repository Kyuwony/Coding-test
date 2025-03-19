#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    int left = 0;
    int right = 0;

    for(auto c : s){
        if(c == '('){
            left++;
        }
        else{
            right++;
            if(right > left){
                return false;
            }
        }
    }

    return left == right ? true : false;
}