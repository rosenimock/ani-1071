#include <stdio.h>

int main() 
{
    int n ;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);
    if (n % 2 == 0) 
    {
        printf("Le nombre %d est pair.\n", n);
    }
    else 
    {
        printf("Le nombre %d est impair.\n", n);
    }
    
    if (n<0) 
    {
        printf("Le nombre %d est négatif.\n", n);
    }else if (n==0) 
    {
        printf("Le nombre %d est nul.\n", n);
    }else
    {
        printf("Le nombre %d est positif.\n", n);
    }
    
    if(n % 3 == 0)
    {
        printf("le nombre %d est divisible par 3.\n", n);
    }else
    {
        printf("le nombre %d n'est pas divisible par 3.\n", n);
    }

    return 0;
}