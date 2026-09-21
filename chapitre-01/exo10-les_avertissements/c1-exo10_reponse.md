# exécution 
```
PS C:\Users\USER\Desktop> cd .\ani-1071\
PS C:\Users\USER\Desktop\ani-1071> cd .\chapitre-01\
PS C:\Users\USER\Desktop\ani-1071\chapitre-01> cd .\exo10-les_avertissements\
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo10-les_avertissements> clang++ -wall -waxtra c1-exo10_main. cpp -o mon_programme
clang++: error: unknown argument '-wall'; did you mean '-Wall'?
clang++: error: unknown argument: '-waxtra'
clang++: error: no such file or directory: 'c1-exo10_main.'
clang++: error: no such file or directory: 'cpp'
clang++: error: no input files
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo10-les_avertissements> clang++ -wall -wextra c1-exo10_main.cpp -o mon_programme 
clang++: error: unknown argument '-wall'; did you mean '-Wall'?
clang++: error: unknown argument: '-wextra'
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo10-les_avertissements> clang++ -Wall -Wextra c1-exo10_main.cpp -o mon_programme
c1-exo10_main.cpp:4:30: error: expected ';' after expression
    4 |   printf ("entrer un nombre")
      |                              ^
      |                              ;
1 error generated.
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo10-les_avertissements> clang++ -Wall -Wextra c1-exo10_main.cpp -o mon_programme
c1-exo10_main.cpp:3:9: warning: unused variable 'varinutile' [-Wunused-variable]
    3 |     int varinutile=10;
      |         ^~~~~~~~~~
1 warning generated.
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo10-les_avertissements> 
```
# difference entre un avertissement et une erreur
* une erreur arrete la compilation (elle indique que le code viole les règlles de syntaxe)

alors que!

* un avertissement n'arrete pas la compilation(car le code est syntaxiquement correcte)

* l'avertissement existe pour signaler au développeur des situations suspectes ou des pratiques risqués qui ne violent pas des règles strictes du langage
