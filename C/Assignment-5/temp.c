#include <stdio.h>

int main() {
    char buffer[1000];  // Large static buffer
    char *ptr = buffer; // Pointer to track input position
    char ch;

    printf("Enter a string: ");

    while ((ch = getchar()) != '\n' && ptr < buffer + sizeof(buffer) - 1) {
        *ptr = ch;  // Store character in buffer
        ptr++;      // Move pointer forward
    }

    *ptr = '\0';  // Null-terminate the string

    printf("You entered: %s\n", buffer);

    return 0;
}
