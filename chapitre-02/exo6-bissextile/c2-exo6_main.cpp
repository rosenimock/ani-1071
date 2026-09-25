#include <stdio.h>

int main() 
{
    int n ;
    printf("Entrez une année : ");
    scanf("%d", &n);
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        printf("L'année %d est bissextile.\n", n);
    }
    else
    {
        printf("L'année %d n'est pas bissextile.\n", n);
    }
    return 0;
}