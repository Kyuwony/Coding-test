#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int a, int b) {
    int answer, count = 0;
    
    int num = b;
    while(num > 0){
        num /= 10;
        count++;
    }
    
    if (a * pow(10, count) + b >= 2 * a * b){
        answer = a * pow(10, count) + b;
    }
    else{
        answer = 2 * a * b;
    }
    return answer;
}