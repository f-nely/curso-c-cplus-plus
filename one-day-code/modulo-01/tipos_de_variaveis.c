#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a;
    float b;
    char c;
    bool d;

    a = 7;
    b = 2.3;
    c = 'a';
    d = true;

    printf("\nO valor de a = %d", a);
    printf("\nO valor de b = %.2f", b);
    printf("\nO valor de c = %c", c);
    printf("\nO valor de d = %d\n", d);

    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c);
    scanf("%d", &d);

    printf("\nO valor de a = %d", a);
    printf("\nO valor de b = %.2f", b);
    printf("\nO valor de c = %c", c);
    printf("\nO valor de d = %d\n", d);

    return 0;
}
