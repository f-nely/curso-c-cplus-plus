#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned) time(NULL));

    int aleatoria = rand() % 3;
    int aleatoriaSegundo = (rand() % 5) + 1; // numero entre 1 e 5

    printf("%d\n", aleatoriaSegundo);

    return 0;
}
