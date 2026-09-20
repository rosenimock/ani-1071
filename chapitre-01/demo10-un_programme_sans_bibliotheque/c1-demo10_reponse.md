# programme qui ne contient aucun #include et n'appelle aucune fonction
 ```
 int main() {
    return 7;
 }       
```
*compilation
```PS C:\Users\USER\Desktop> cd .\ani-1071\
PS C:\Users\USER\Desktop\ani-1071> cd .\chapitre-01\
PS C:\Users\USER\Desktop\ani-1071\chapitre-01> cd .\demo10-un_programme_sans_bibliotheque\
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo10-un_programme_sans_bibliotheque> clang++ c1-demo10_main.cpp -o c1-demo10    
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo10-un_programme_sans_bibliotheque> .\c1-demo10.exe
```
* code de sortie
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo10-un_programme_sans_bibliotheque> $LASTEXITCODE
7
```
* taille de l'exécutable
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo10-un_programme_sans_bibliotheque> (Get-ltem .\c1-demo10.exe).length
Get-ltem : Le terme «Get-ltem» n'est pas reconnu comme nom d'applet de commande, 
fonction, fichier de script ou programme exécutable. Vérifiez l'orthographe du nom, ou si 
un chemin d'accès existe, vérifiez que le chemin d'accès est correct et réessayez.
Au caractère Ligne:1 : 2
+ (Get-ltem .\c1-demo10.exe).length
+  ~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (Get-ltem:String) [], CommandNotFoundExcept 
   ion
    + FullyQualifiedErrorId : CommandNotFoundException
 
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo10-un_programme_sans_bibliotheque> (Get-item .\c1-demo10.exe).length
*103028*
```
# programme qui affiche bonjour 
```
#include<stdio.h>

int main() {
    printf("bonjour");
    return 0;
}
```
* taille de l'exécutable 
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo10-un_programme_sans_bibliotheque>
                                                                                     (Get-item .\bonjour.exe).length  
*104794*
```
# explication:
* ecart  
(103028<104794 donc une difference de 1766) : l'ecart de taille s'explique  par le fait que l'éxecutable ne contient pas uniquement le code que nous avons ecrit, la chaine de compilation ajoute notamment du code de demarrage et des élements du runtime nécessaires au lancement et au fonctionnement du programme 
* l'élement qui a été ajouté:

le code de demarrage et les élements du runtime nécessaires au lancement et fonctionnement du programme sont ajoutés automatiquement par les outils de la chaine de compilation notament l'éditeur de liens associés au compilateur 


