# CODE
```
#include <stdio.h>

int main() {

    int n1, n2, n3, n4, n5;
    printf("Entrer cinq entiers de votre clavier : ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    int somme = n1 + n2 + n3 + n4 + n5;
    float moyenne = (float)somme / 5;
    printf("La somme est : %d\n", somme);
    printf("La moyenne est : %.2f\n", moyenne);
    
    return 0;
}
```

# EXECUTION
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo2-somme_et_moyenne> clang++ c2-exo2_main.cpp -o c2-exo2_main                                  
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo2-somme_et_moyenne>  .\c2-exo2_main\  
.\c2-exo2_main\ : Le terme «.\c2-exo2_main\» n'est pas reconnu comme nom d'applet de commande, fonction, fichier de script ou programme 
exécutable. Vérifiez l'orthographe du nom, ou si un chemin d'accès existe, vérifiez que le chemin d'accès est correct et réessayez.
Au caractère Ligne:1 : 2
+  .\c2-exo2_main\
+  ~~~~~~~~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (.\c2-exo2_main\:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException
 
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo2-somme_et_moyenne>  .\c2-exo2_main 
Entrer cinq entiers de votre clavier : 7 8 9 10 10
La somme est : 44
La moyenne est : 8.80
```
# explication 
'programme qui lis cinq entier au clavier affiche leur somme et leur moyenne en decimale '