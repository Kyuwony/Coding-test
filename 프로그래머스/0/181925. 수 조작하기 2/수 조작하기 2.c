#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(numLog_len + 1);
    answer[0] = '\0';
    int num;
    
    for(int i = 0; i < numLog_len - 1; i++){
        
        num = numLog[i + 1] - numLog[i];
        
        if(num == 1){
            strcat(answer, "w");
        }
        else if(num == -1){
            strcat(answer, "s");
        }
        else if(num == 10){
            strcat(answer, "d");
        }
        else if(num == -10){
            strcat(answer, "a");
        }
    }

    return answer;
}