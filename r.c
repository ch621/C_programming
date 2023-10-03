
#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int length = strlen(str);

    int start = 0;

    for (int end = 0; end < length; end++) {
        if (str[end] == ' ') {
            // Found a word boundary, reverse the word
            for (int i = end - 1; i >= start; i--) {
                printf("%c", str[i]);
            }
            printf(" ");
            start = end + 1; // Update the start index for the next word
        }
    }

    // Reverse the last word (or the only word if there are no spaces)
    for (int i = length - 1; i >= start; i--) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Reversed words: ");
    reverseWords(str);
 return 0;
}

