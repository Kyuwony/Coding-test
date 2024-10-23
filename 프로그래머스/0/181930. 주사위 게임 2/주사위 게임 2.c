#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    // 세 숫자 모두 같을경우
    if(a != b && a != c && b != c){
        return a + b + c;
    }
    // 세 숫자 모두 다를경우
    else if(a == b && b == c){
        return (a + b + c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    }
    // 두 숫자 같고 나머지 다른 경우
    else{
        return (a + b + c) * (a*a + b*b + c*c);
    }
}