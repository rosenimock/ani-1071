#include <stdio.h>

int pgcd(int a, int b) {  

    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() 
{
printf("=== CALCUL DU PGCD ===\n");
    int a, b;
    printf("Entrez le premier nombre : ");
    scanf("%d", &a);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &b);
    
    int resultat = pgcd(a, b);
    printf("Le PGCD de %d et %d est : %d\n", a, b, resultat);
    
    return 0;
}


