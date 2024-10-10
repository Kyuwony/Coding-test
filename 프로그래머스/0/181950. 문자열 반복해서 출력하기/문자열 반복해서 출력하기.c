#include <stdio.h>

int main(){
    char str[10];
    int n;
    
    scanf("%s %d", &str, &n);
    for(int i = 0; i < n; i++){
        printf("%s", str);
    }
}