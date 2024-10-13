#include <stdio.h>
#include <string.h>

int main(void) {
    char str[11];
    scanf("%s", &str);
    
    for(int i = 0; i < strlen(str); i++){
        printf("%c\n", str[i]);
    }
}
