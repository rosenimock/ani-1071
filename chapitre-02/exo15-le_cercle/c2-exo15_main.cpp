#include <stdio.h>

int main() 
{
    int r = 12;
    for(int y = r; y >= -r; y--) 
    {
        for(int x = -r; x <= r; x++) 
        {
            if(x*x + y*y <= r*r) 
            {
                printf("#");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}