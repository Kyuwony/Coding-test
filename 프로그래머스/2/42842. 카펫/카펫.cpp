#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    int w, d;
    vector<int> answer;
    
    for(int i = 1; i <= yellow/2; i++){
        if(yellow % i == 0){
            d = i;
            w = yellow / i;
            
            if(w*2 + d*2 + 4 == brown){
                answer.push_back(w+2);
                answer.push_back(d+2);
                return answer;
            }
        }
    }
}