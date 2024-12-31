// A program that tests whether two words are anagrams

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int counts1[26] = {0}, counts2[26] = {0};

    printf("Enter first word: ");
    // Calls read_word function
    read_word(counts1);

    printf("Enter second word: ");
    // Calls read_word function
    read_word(counts2);

    if (equal_array(counts1, counts2))
        printf("The words are anagrams\n");
    else
        printf("The words aren't anagrams\n");

    exit(EXIT_SUCCESS);
}

void
read_word(int counts[26])
{
    char ch;
    while ((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z')
            counts[ch - 'a']++;
    }
}

bool
equal_array(int counts1[26], int counts2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if(counts1[i] != counts2[i])
            return false;
    }
    return true;
}
