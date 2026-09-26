#include <stdio.h>

int main() 
{
    int choix ;
    printf("=== MENU PRINCIPAL ===\n");
    printf("1. nouvelle partie\n");
    printf("2. charger\n");
    printf("3. options\n"); 
    printf("4. quitter\n");
    printf("votre choix : ");
    
    scanf ("%d", &choix );
    
    switch (choix)
    {
        case 1:
            printf("Nouvelle partie sélectionnée.\n");
            break;
        case 2:
            printf("Charger sélectionné.\n");
            
        case 3:
            printf("Options sélectionnées.\n");
            break;
        case 4:
            printf("Quitter sélectionné.\n");
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }
    return 0;
}