#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer;
    int num = x;
    int sum = 0;
    while(x > 0){
        sum += x % 10;
        x /= 10;
    }
    
    if(num % sum == 0){
        answer = true;
    }
    else{ answer = false; }
    
    return answer;
}