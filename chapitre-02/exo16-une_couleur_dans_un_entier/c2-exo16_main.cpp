#include <stdio.h>

int main() 
{
    unsigned int x = 0x2A7FCCFF; // initialisation de la couleur de depart

    unsigned int r = (x >> 24) & 0xFF; 
    unsigned int g = (x >> 16) & 0xFF;  
    unsigned int b = (x >> 8) & 0xFF;   
    unsigned int a = x & 0xFF;          

    printf("Composantes en decimal :\n");
    printf("Rouge: %u\n", r);
    printf("Vert: %u\n", g);
    printf("Bleu: %u\n", b);
    printf("Alpha: %u\n", a);

    unsigned int x_reconstructed = (r << 24) | (g << 16) | (b << 8) | a;
    if (x_reconstructed == x) {
        printf("vérification : la couleur recompée est identiqque à c (=0x%08X)\n", x_reconstructed);
    } else {
        printf("erreur de recomposition.\n");
    }
    unsigned int r_dark = r / 2;
    unsigned int g_dark = g / 2;
    unsigned int b_dark = b / 2;
    unsigned int a_dark = a; // inchangé
    unsigned int x_dark = (r_dark << 24) | (g_dark << 16) | (b_dark << 8) | a_dark;
    printf("Couleur plus sombre : 0x%08X\n", x_dark);

    return 0;
}