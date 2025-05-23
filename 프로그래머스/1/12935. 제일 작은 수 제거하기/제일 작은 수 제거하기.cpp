#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    int minIndex = 0;
    for(int i = 1; i < arr.size(); i++){
        if(min > arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }
    
    arr.erase(arr.begin() + minIndex);

    if(arr.size() == 0){
        arr.push_back(-1);
    }

    return arr;
}