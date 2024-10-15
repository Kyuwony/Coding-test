#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int k) {
    
    char* answer = (char*)malloc(strlen(my_string) * k + 1);
    
    strcpy(answer, my_string);
    for(int i = 1; i < k; i++){
        strcat(answer, my_string);
    }
    
    
    return answer;
}