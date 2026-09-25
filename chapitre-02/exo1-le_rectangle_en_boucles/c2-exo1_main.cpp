#include <stdio.h>

#define LIGNE 3
#define COLONNE 4

int main() 
{
  for (int i = 1; i <= LIGNE; i++) 
  {
    for (int j = 1; j <= COLONNE; j++) 
    {
        if (i==1 || i==LIGNE || j==1 || j==COLONNE) 
        {
           printf(" # ");
        }
        else
        {
            printf("   ");
        }
    }
    printf(" \n");
  }
  return 0;
}
    