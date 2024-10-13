#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* str1, const char* str2) {
    
    int length = strlen(str1) + strlen(str2);
    char* answer = (char*)malloc(sizeof(char) * (strlen(str1) + strlen(str2)));
    
    for(int i = 0; i < length; i++){
        *(answer + i) = i % 2 == 0 ? str1[i/2] : str2[i/2];
    }
    
    answer[length] = '\0';
    
    return answer;
}