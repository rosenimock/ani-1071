#include <stdio.h>
unsigned int factorielle32(unsigned int n)
{
    unsigned int res = 1;
    unsigned int i= 2;
    while (i <= n)
    {
        res *= i;
        i++;
    }
return res;
}
unsigned long long factorielle64(unsigned long long n)
{
    unsigned long long res = 1;
    unsigned long long i= 2;
    while (i <= n)
    {
        res *= i;
        i++;
    }
return res;
}

int main(void)
   {
    unsigned int n;
    if(scanf("%u", &n) != 1 || n < 0)
    {
return 1;
    }
    unsigned int res32 = factorielle32(n);
    unsigned long long res64 = factorielle64(n);
    printf("%u\n", res32);
    printf("%llu\n", res64);
    return 0;
}