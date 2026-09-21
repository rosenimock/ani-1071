# fichier obtenu :
le fichier objet "c1-exo7_main.o"
# tentative de lancement du fichier obtenu
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo7-s_arreter_avant_l_edition_de_liens> clang++ -c c1-exo7_main.cpp
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo7-s_arreter_avant_l_edition_de_liens> .\c1-exo7_main.o  
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo7-s_arreter_avant_l_edition_de_liens> clang++ -c c1-exo7_main.o  
clang++: warning: c1-exo7_main.o: 'linker' input unused [-Wunused-command-line-argument]
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo7-s_arreter_avant_l_edition_de_liens> clang++ -o c1-exo7_main.o
clang++: error: no input files
```
# explication 
le fichier objet contient bien le code machine correspondant à notre fichier source mais il lui manque deux élement essentiels pour devenir un fichier exectuble qui sont "l'édition de liens " et "le point d'entré du système "