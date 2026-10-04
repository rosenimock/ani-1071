#include <stdio.h>

long long valeur_absolue(long long x)
{
    return(x < 0) ? -x : x;
}
long long pgcd(long long a, long long b) 
{
    a = valeur_absolue(a);
    b = valeur_absolue(b);

    while(b != 0)
    {
        long long temp = b;
        b = a % b ;
        a = temp;
    }
    return a;
}
long long ppcm(long long a, long long b) 
{
    a = valeur_absolue(a);
    b = valeur_absolue(b);

    if (a == 0 || b == 0)
    {
        return 0;
    }

    long long g = pgcd(a, b);
    return (a / g) * b;
}

int main() 
{
    long long a, b;
    int i = 0;
    
    while((scanf ("%lld %lld", &a , &b) != 2))
    {
        i++;
        long long g = pgcd(a, b);
        long long p = ppcm(a, b);
    printf("%lld\n", g);
    printf("%lld\n", p);
    }
if(i == 0)
{
    printf("AUCUN\n");
}
return 0;
}