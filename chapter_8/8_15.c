// A program that encrypts a message using the Caesar cipher

#include <stdio.h>

int main(void)
{
    char c, message[80];
    int i, end, shift;

    printf("Enter a message to be encrypted: ");
    
    // For loop to save the message into our array
    for (i = 0;(c = getchar()) != '\n'; i++) {
        message[i] = c;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    printf("Encrypted message: ");

    end = i;
    for (i = 0; i <= end; i++) {
        if (message[i] >= 'A' && message[i] <=  'Z') {
            if (message[i] + shift <= 'Z')
                printf("%c", message[i] + shift);
            else
                printf("%c", message[i] - (26 - shift));
        }
        else if (message[i] >= 'a' && message[i] <= 'z') {
            if (message[i] + shift <= 'z')
                printf("%c", message[i] + shift);
            else
                printf("%c", message[i] - (26 - shift));
        }
        else {
            printf("%c", message[i]);
        }
    }

    return 0;
}
