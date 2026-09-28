#include <stdio.h>

int main() 
{
    int h;
    printf("Entrez la hauteur du triangle : ");
    if(scanf("%d", &h) != 1 || h <= 0) 
    {
        printf("veillez entrer un entier positif .\n");
        return 1;
    }
    for(int i = 1; i <=h; i++) 
    {
        for(int j = 1; j < h-i; j++) 
        {
            printf(" ");
        }
        for(int j = 0; j < (2*i-1); j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}