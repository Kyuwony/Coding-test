#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = 1;
    int sum;
    for(int i = 1; i < n/2 + 1; i++){
        sum = 0;
        for(int j = i; sum < n; j++){
            sum += j;
            if(sum == n){ count++; }
        }
    }
    return count;
}