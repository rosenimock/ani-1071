# première compilation après avoir retirer tous les points virgule 
```
PS C:\Users\USER\Desktop> cd .\ani-1071\
PS C:\Users\USER\Desktop\ani-1071> cd .\chapitre-01\
PS C:\Users\USER\Desktop\ani-1071\chapitre-01> cd .\exo9-le_massacre_du_point_virgule\
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo9-le_massacre_du_point_virgule> clang++ c1-exo9_main.cpp "massacre des points virgules"
clang++: error: no such file or directory: 'massacre des points virgules'
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo9-le_massacre_du_point_virgule> clang++ c1-exo9_main.cpp "c1-exo9_main"                
clang++: error: no such file or directory: 'c1-exo9_main'
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo9-le_massacre_du_point_virgule> clang++ c1-exo9_main.cpp -o "c1-exo9_main"
c1-exo9_main.cpp:3:17: error: expected ';' at end of declaration
    3 |     int nombre=0
      |                 ^
      |                 ;
c1-exo9_main.cpp:14:11: error: expected ';' after return statement
   14 |   return 0
      |           ^
      |           ;
2 errors generated.
PS 
```

* la compilation signale juste 2 erreurs 

# deuxième compilation aprèes avoir remis le points virgule a la première ligne d'erreur signaler
```
C:\Users\USER\Desktop\ani-1071\chapitre-01\exo9-le_massacre_du_point_virgule> clang++ c1-exo9_main.cpp -o "c1-exo9_main"
c1-exo9_main.cpp:4:31: error: expected ';' after expression
    4 |   printf ("entrer un nombre:")
      |                               ^
      |                               ;
c1-exo9_main.cpp:7:67: error: expected ';' after expression
    7 |       printf("Le nombre %d est pair. code de sortie: 0\n", nombre)
      |                                                                   ^
      |                                                                   ;
c1-exo9_main.cpp:8:15: error: expected ';' after return statement
    8 |       return 0
      |               ^
      |               ;
c1-exo9_main.cpp:10:68: error: expected ';' after expression
   10 |       printf("le nombre %d est impair. code de sortie:1\n", nombre)
      |                                                                    ^
      |                                                                    ;
c1-exo9_main.cpp:11:15: error: expected ';' after return statement
   11 |       return 1
      |               ^
      |               ;
c1-exo9_main.cpp:14:11: error: expected ';' after return statement
   14 |   return 0
      |           ^
      |           ;
6 errors generated.
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo9-le_massacre_du_point_virgule> 
```
* la compilation signale maintenant 6 erreurs.
