#include <stdio.h>
int chiffre_recursif(int n)
{
    if (n < 0)
    {
        n = -n ;
    }
    if(n < 10)
    {
        return 1;
    }
    return 1 + chiffre_recursif(n / 10);
}

int somme_chiffre_recursif(int n)
{
if(n < 0)
{
  n = -n;
}
if(n < 10)
    {
        return n;
    }
    return (n % 10) + somme_chiffre_recursif(n / 10);
}

int main(void)
{
    int n;
    int i = 0;
    while(scanf("%d", &n) == 1)
    {
        i++;
        printf("%d\n", chiffre_recursif(n));
        printf("%d\n", somme_chiffre_recursif(n));
    }
    if ( i==0 )
    {
        printf ("AUCUN\n");
    }
    return 0;
}