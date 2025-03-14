#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> vec;
    
    while(n){
        vec.push_back(n % 10);
        n /= 10;
    }
    
    sort(vec.begin(), vec.end(), greater<>());
    for(auto i : vec){
        answer *= 10;
        answer += i;
    }
    
    return answer;
}