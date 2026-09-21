# COMPARAISON DES LIGNES 
le code source ("bonjour.cpp") compte 6 lignes 
le code de sortie du preprocesseur ("sortie.txt") compte 1817 lignes 

# explication de m'ecrat
L'ecart important s'expliqque par le fait que le préprocesseur remplace la directive "#include <stdio.h>" par le contenu intégral des fichiers d'en-tete de la bibliothèque standard ce qui génere un fichier de sortie tres volumineux avant meme la phase de compilation proprement dite .