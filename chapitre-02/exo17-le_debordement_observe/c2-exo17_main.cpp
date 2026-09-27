#include <stdio.h>

int main() 
{
    printf("=== INT : x *= 2 ===\n");
    int x_int = 1;
    int tour = 1;
    while (x_int != 0) 
    {
        printf("Tour %d : x = %d\n", tour, x_int);
        x_int *= 2;
        tour++;
        if (tour > 40) break; // Limite pour éviter une boucle infinie en cas de problème
        {
            printf("\n=== INT : x <<= 1 ===\n");
            int x_int = 1;
            tour++;
            if(tour > 40) break;
        }
    printf("\n=== LONG LONG : x *= 2 ===\n");
    long long x_long_long = 1;
    tour = 1;
    while (x_long_long != 0) {
        printf("Tour %d : x = %lld\n", tour, x_long_long);
        x_long_long *= 2;
        tour++;
        if (tour > 40) break; // Limite pour éviter une boucle infinie en cas de problème
    }

        printf("\n=== LONG LONG : x <<= 1 ===\n");
        unsigned int x_uint = 1;
        tour = 1;
        while (x_uint != 0) {
            printf("Tour %d : x = %u\n", tour, x_uint);
            x_uint <<= 1;
        tour++;
        if (tour > 40) break; // Limite pour éviter une boucle infinie en cas de problème
    }
    }
    return 0;
}

