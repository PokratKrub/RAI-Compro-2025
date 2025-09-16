#include <stdio.h>

int Vowels(char *str) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                count++;
                break;
        }
    }
    return count;
}

int main() {
    char input[10];

    printf("Input: ");
    scanf("%[^\n]s",input);

    int num_vowels = Vowels(input);

    printf("Output: Number of vowels: %d\n", num_vowels);
    return 0;
}

