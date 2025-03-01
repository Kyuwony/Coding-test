#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    for( ; idx < arr.size(); idx++){
        if(arr[idx] == 1){
            return idx;
        }
    }
    return -1;
}