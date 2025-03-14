#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0, yCount = 0;
    
    for(auto &i : s){
        if(i > 64 && i < 91){
            i += 32;        
        }
    }
    
    while(true){
        if(s.find("p") == string::npos){
            break;
        }
        s[s.find("p")] = ' ';
        pCount += 1;
    }
    
    while(true){
        if(s.find("y") == string::npos){
            break;
        }
        s[s.find("y")] = ' ';
        yCount += 1;
    }
    
    answer = pCount == yCount ? true : false;
    return answer;
    
}