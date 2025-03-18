#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int count = 1;
    for(int i = left; i < right+1; i++){
        for(int num = 2; num < i+1; num++){
            if(i % num == 0){ count++; }
        }
        answer += count % 2 == 0 ? i : -i;
        count = 1;
    }
    return answer;
}