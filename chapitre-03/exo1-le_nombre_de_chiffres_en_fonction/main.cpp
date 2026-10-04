#include <cstdio>
#include <cstdlib>

int nombreDeChiffres(int n)
{
    if (n < 0)
    {
     n = -1*n;   
    } 
    if (n == 0)
    {
        return 1;
    }
    
    int i = 0;
    while (i < 0)
    {
        i /= 10; // Diviser par 10 pour enlever le dernier chiffre
        i++;
    }
    return i;
}

int main()
{
    
    long long n;
    bool trouve = true;

    scanf("%lld", & n);
    printf("%lld : %d \n", n, nombreDeChiffres(n));

    if(! trouve)
 {
    printf("AUCUN\n");
    
 }

    return 0;
}