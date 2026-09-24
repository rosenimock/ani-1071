#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5;
    printf("Entrer cinq entiers de votre clavier : ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int somme = n1 + n2 + n3 + n4 + n5;
    float moyenne = (float)somme / 5;
    printf("La somme est : %d\n", somme);
    printf("La moyenne est : %.2f\n", moyenne);
    
    return 0;
}