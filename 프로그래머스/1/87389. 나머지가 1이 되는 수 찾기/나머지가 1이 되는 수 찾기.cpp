#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int num = 2;
    while(true){
        if(n%num == 1)
            return num;
        
        if(num == 2){
            num += 1;
        }
        else{
            num += 2;
        }
    }
    return answer;
}