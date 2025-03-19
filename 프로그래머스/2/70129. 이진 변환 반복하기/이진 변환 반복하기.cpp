#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    string binary;
    int n = 0;
    int count = 0;
    int length = 0;
    int deletedCount = 0;
    
    while(s != "1"){
        length = s.size();
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        deletedCount += length - s.size();
        n = s.size();
        
        binary = "";
        while(n > 0){
            binary += (n & 1) ? '1' : '0';
            n >>= 1;
        }
        
        reverse(binary.begin(), binary.end());
        s = binary;
        
        count++;
    }
    
    answer.push_back(count);
    answer.push_back(deletedCount);
    return answer;
}