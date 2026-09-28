#include <cmath>
#include <cstdio>

int main()
{
    double y  = 10.0;   // hauteur, en mètres
    double v  = 0.0;    // vitesse, en m/s (vers le haut)
    double dt = 0.01;    // pas de temps
    double g = 9.81; // gravité

    int nb_rebonds = 0;

    while(1) 
    {
        v -= g * dt;
        y += v * dt;

        if(y < 0)
        {
            y = 0;
            v = v * -0.8;
        if(fabs(v) < 0.1)
        {
            break;
        }
    nb_rebonds++;
    double hauteur_max = (v * v) / (2 * g);
    printf("rebond %d effectue .\n", nb_rebonds);
    printf("hauteur maximale atteinte : %.4f m\n", hauteur_max);
        }
    }
    printf("Nombre de rebonds : %d\n", nb_rebonds);
    return 0;
}