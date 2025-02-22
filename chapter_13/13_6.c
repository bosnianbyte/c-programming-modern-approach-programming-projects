/*  A program that checks planet names 
    MODIFIED: ignores case when comparing command-line arguments with
        strings in the planet array.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int main (int argc, char *argv[])
{
    char *planets[] =  {"Mercury", "Venus", "Earth",
                        "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};
    
    int i, j;

    for (i = 1; i < argc; i++) {
        for (j = 0; j < NUM_PLANETS; j++)
            if (strcasecmp(argv[i], planets[j]) == 0) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
            if (j == NUM_PLANETS)
                printf("%s is not a planet\n", argv[i]);
    }

    return 0;
}
