/* Checks planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                        "Uranus", "Neptune", "Pluto"};

    int i;
    int j;

    for (i = 1; i < argc; i++) {
        if ((argv[i][0] >= 'a') && (argv[i][0] <= 'z')) {
            argv[i][0] = argv[i][0] - 32;
        }
        for (j = 0; j < NUM_PLANETS; j++) {
            if (strcmp(argv[i], planets[j]) == 0) {
                printf("%s is a planet %d\n", argv[i], j + 1);
                break;
            }
        }
        if (j == NUM_PLANETS) {
            printf("%s is not a planet\n", argv[i]);
        }
    }

    return 0;
}
