// A program that tests whether two words are anagrams

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int alphabet[26] = {0};
    char ch;
    int i;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
            alphabet[ch - 'a']++;
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
            alphabet[ch - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (alphabet[i] != 0) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }
    printf("The words are anagrams.\n");

    return 0;
}
