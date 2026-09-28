#include <stdio.h>

int main() 
{
    int a, b;

    printf("entrez deux nombres");
    scanf("%d %d", &a, &b);
    printf("%d\n", a < b ? a : b);
    printf("%d\n", a > b ? a : b);
    printf ("%s\n", a % 2 == 0 ? "pair" : "impair");
    printf("%d %s\n", a, a == 1 ? "objets" : "objets");

    return 0;
}
