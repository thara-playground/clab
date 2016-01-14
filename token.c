#include <stdio.h>
#include <string.h>

#define NUM_DATA 10
#define LEN_DATA 20

char zoo[] = "Cat, Dog, Tiger, Bug, Bird, Fish, Seep, Cow, Pig, Rat";

int main(void)
{
    char animal[NUM_DATA][LEN_DATA];
    char *token = " ,";
    int i;

    printf("オリジナル:\t");
    printf("%s\n\n", zoo);

    printf("取り出したトークン:\n");
    strcpy(animal[0], strtok(zoo, token));

    printf("%s\t", animal[0]);

    for (i = 1; i < NUM_DATA; i++) {
        strcpy(animal[i], strtok(NULL, token));
        printf("%s\t", animal[i]);
    }

    return 0;
}
