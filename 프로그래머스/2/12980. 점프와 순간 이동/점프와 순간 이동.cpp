#include <iostream>
#include <string>
using namespace std;

int solution(int n)
{
    int ans = 0;
    string binary = "";
    
    while(n > 0){
        binary += (n & 1) ? '1' : '0';
        n >>= 1;
    }
    
    for(char c : binary){
        if(c == '1'){
            ans += 1;
        }
    }

    return ans;
}