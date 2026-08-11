#include <stdio.h>

int main() {
    char str[100];
    
    // Read input into char array using standard I/O
    scanf("%d",& str);
    
    // Loop until null terminator '\0' without needing strlen()
    for (int i = 0; str[i] != '\0'; i++) {
        // Skip negative sign if present
        if (str[i] == '-') continue;
        
        printf("%c\n", str[i]);
    }
    
    return 0;
}