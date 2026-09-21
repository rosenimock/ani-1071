# compilation avec l'option -c
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo8-l_erreur_qui_ne_vient_pas_du_compilateur> clang++  -c  c1-exo8_main.cpp -o c1-exo8_main.o
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo8-l_erreur_qui_ne_vient_pas_du_compilateur> 
```
# resultat
la commande réussit et génère un fichier "objet c1-exo8_main.o"
# outil impliqué : 
'LE COMPILATEUR'

# explication
le compilateur traduit simplement le code source c enlangage  machine , il a uniquement besoin de voir la declaration ("int calculer ();") pour s'assurer que la syntaxe est correcteet que le type de retour correspond.

# compilation sans l'option -c
 ```
 PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo8-l_erreur_qui_ne_vient_pas_du_compilateur> clang++   c1-exo8_main.cpp -o c1-exo8_main
C:/msys64/ucrt64/bin/ld: C:/Users/USER/AppData/Local/Temp/c1-exo8_main-69c4a7.o:c1-exo8_main.cpp:(.text+0x23): undefined reference to `calculer()'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\exo8-l_e
```
# resultat 
la commande echoue avec une erreur du type "undefined reference to 'calculer()'" 
# outil impliqué :
'L'EDITEUR DE LIENS'
# explication
la commande a la fois la compilation et l'éditeur de liens , une fois le code compiler l'éditeur de liens essaie de lier tous  les appels de fonctions aa leur véritable définition
