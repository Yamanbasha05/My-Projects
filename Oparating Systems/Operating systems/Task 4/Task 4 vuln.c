#include <stdio.h>
#include <string.h>

void secret_function() {
    printf("Congratulations! You've called the secret function.\n");
}

void echo() {
    char buffer[128];
    printf("Enter some text:\n");
    gets(buffer);
    printf("You entered: %s\n", buffer);
}

int main() {
    echo();
    return 0;
}