#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream stream(s);
    int num;
    
    stream >> num;
    int min = num, max = num;
    
    while(stream >> num){
        if(min > num){
            min = num;
        }
        if(max < num){
            max = num;
        }
    }
    
    answer += to_string(min);
    answer += " ";
    answer += to_string(max);
    return answer;
}