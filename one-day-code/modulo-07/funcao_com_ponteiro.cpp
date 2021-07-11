#include <stdio.h>
#include <stdlib.h>

void aumentaDez(int *num);

int main()
{
    int a = 5;

    printf("%d\n", a);
    aumentaDez(&a);
    printf("%d\n", a);

    return 0;
}

void aumentaDez(int *num)
{
    *num = *num + 10;
}
