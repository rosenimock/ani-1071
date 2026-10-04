#include <stdio.h>
int chiffreRecursif(int n)
{
    if (n < 0)
    {
        n = -n ;
    }
    if(n < 10)
    {
        return 1;
    }
    return 1 + chiffreRecursif(n / 10);
}

int sommeChiffreRecursif(int n)
{
if(n < 0)
{
  n = -n;
}
if(n < 10)
    {
        return n;
    }
    return (n % 10) + sommeChiffreRecursif(n / 10);
}

int main(void)
{
    int n;
    int i = 0;
    while(scanf("%d", &n) == 1)
    {
        i++;
        printf("%d\n", chiffreRecursif(n));
        printf("%d\n", sommeChiffreRecursif(n));
    }
    if ( i==0 )
    {
        printf ("AUCUN\n");
    }
    return 0;
}
