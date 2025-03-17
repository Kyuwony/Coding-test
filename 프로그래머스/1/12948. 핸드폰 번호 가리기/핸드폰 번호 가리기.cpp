#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    if(phone_number.length() > 4){
        for(int i = phone_number.length() - 5; i > -1; i--){
            phone_number[i] = '*';
        }
    }
    
    return phone_number;
}