#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

int randgen()
{
    int r = rand();
    return r;
}

int *createarray()
{
    int *array;
    int i;
    array = malloc(10 * sizeof(int));
    for (i = 0; i < 10; i++)
    {
        array[i] = randgen();
    }
    return array;
}

int main()
{
    srand(time(0));
    int i;

    printf("--- Creation tableaux... --- \n");
    int *array = createarray();
    printf("-- Affichage Tableau --\n");
    for (i = 0; i < 10; i++)
    {
        printf(" - %d | %d", array[i], i);
    }
}