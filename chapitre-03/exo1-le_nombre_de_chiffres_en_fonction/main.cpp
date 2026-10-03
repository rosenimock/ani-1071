#include <cstdio>
#include <cstdlib>

int nombreDeChiffres(int n)
{
    int i = 0;
    if (n == 0)
    {
        return 1;
    }
    int n_abs = abs(n);
    while (n_abs > 0)
    {
        n_abs /= 10; // Diviser par 10 pour enlever le dernier chiffre
        i++;
    }
    return i;
}

int main()
{
    int test1 = 0;
    int test2 = 7;
    int test3 = 1000;
    int test4 = -58;
    long long n;
    int len ;

    printf(" %d : %d \n", test1, nombreDeChiffres(test1));
    printf(" %d : %d \n", test2, nombreDeChiffres(test2));
    printf(" %d : %d \n", test3, nombreDeChiffres(test3));
    printf(" %d : %d \n", test4, nombreDeChiffres(test4));

 printf("Entrez un nombre entier : ");
 scanf("%lld", & n);
 printf("%lld : %d \n", n, nombreDeChiffres(n));

 len = nombreDeChiffres(n);
 if(n==len)
 {
    printf("AUCUN\n");
    
 }

    return 0;
}