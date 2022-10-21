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

int indexinsert()
{

}

void* showarray(int* array) 
{
    int i;
    printf("-- Affichage Tableau --\n");
    printf("|  Indice - valeur  | \n");
    for (i = 0; i < 10; i++)
    {
        printf("\n|  %d - %d  |", i+1, array[i]);
    }
}

int main()
{
    int insertindex, insertvalue;
    srand(time(0));
    printf("--- Creation tableaux... --- \n");
    int *array = createarray();
    showarray(array);
    printf("\n--- Insertion indice --- \n");
    printf("L'indice ou inserer :");
    printf("\nLa valeur a inserer: ");


}