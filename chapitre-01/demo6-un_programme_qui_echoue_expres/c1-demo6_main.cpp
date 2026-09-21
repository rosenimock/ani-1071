#include <stdio.h>
int main() {
    int nombre=0;
  printf ("entrer un nombre:");
  if (scanf("%d", &nombre) == 1) {
   if (nombre % 2 == 0){
      printf("Le nombre %d est pair. code de sortie: 0\n", nombre);
      return 0;
    }else{
      printf("le nombre %d est impair. code de sortie:1\n", nombre);
      return 1;
    }
  }
  return 0;
          }