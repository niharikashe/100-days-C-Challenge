Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    char str[200];
    int i;
    int capitalize_next = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for (i = 0; str[i] != '\0'; i++) {
        if (capitalize_next && isalpha(str[i])) {
            str[i] = toupper(str[i]);   
            capitalize_next = 0;
        } else {
            str[i] = tolower(str[i]); 
        }

          if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            capitalize_next = 1;
        }
    }

    printf("Sentence case: %s\n", str);
    return 0;
}
