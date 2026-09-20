# LIRE TROIS ERREUR
* premiere ereur : retirer le point virgule
1-message exact 
```
PS C:\Users\USER> clang++ c1-exo3_main.cpp -o ent
c1-exo3_main.cpp:4:30: error: expected ';' after expression
    4 |   printf("entrer un entier:")
      |                              ^
      |                              ;
1 error generated.
PS C:\Users\USER> 
```
2-la ligne signalée

. la ligne 3 du code

3-la ligne réellement fautive 

. printf("entrer un entier")

4-l'etape de la chaine qui a parler : la compilation
 
* deuxieme erreur : ecrire Printf au lieu de printf 

1-message exact
```PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo3-lire_trois_erreurs> clang++  c1-exo3_main.cpp -o erreur 
c1-exo3_main.cpp:4:5: error: use of undeclared identifier 'Printf'; did you mean
      'printf'? 
      |     ^~~~~~
      |     printf
C:/msys64/ucrt64/include/stdio.h:400:15: note: 'printf' declared here
  400 |   int __cdecl printf(const char * __restrict__ _Format,...);
      |               ^
1 error generated.
```      
2-la ligne signalée

. la ligne 3

3-la ligne réellement fautive

. Printf("entrer un entier");

4-l'etape de la chaine qui a parlé: compilation puis éventuellement édition des liens

* troisiéme erreur : retirer la ligne #include <stio.h>

1-message exact
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo3-lire_trois_erreurs> clang++  c1-exo3_main.cpp -o erreur 
```
2-la ligne signalée

. la ligne 1 du code 

3-la ligne réellement fautive

. 

4-l'etape de la chaine qui a parlé: préprocesseur
