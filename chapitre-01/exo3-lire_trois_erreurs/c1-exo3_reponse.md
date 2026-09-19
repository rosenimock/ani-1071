# LIRE TROIS ERREUR
* premiere ereur : pas de point virgule 
```
PS C:\Users\USER> clang++ c1-exo3_main.cpp -o ent
c1-exo3_main.cpp:4:30: error: expected ';' after expression
    4 |   printf("entrer un entier:")
      |                              ^
      |                              ;
1 error generated.
PS C:\Users\USER> 
```
* corection Ajout du point virgule(etat de notre code)
```
#include <stdio.h>

int main() {
  printf("entrer un entier:");
  return 0;
}
```