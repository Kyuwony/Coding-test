#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <iostream>

using namespace std;

int solution(int n) {
    int num = n+1;
    string str1 = bitset<32>(n).to_string();
    str1.erase(remove(str1.begin(), str1.end(), '0'), str1.end());
    
    string str2;
    
    while(true){
        str2 = bitset<32>(num).to_string();
        str2.erase(remove(str2.begin(), str2.end(), '0'), str2.end());
        if(str1 == str2){
            return num;
        }
        num++;
    }
    return -1;
}