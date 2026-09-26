# execution
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo7-le_menu> clang++ c2-exo7_main.cpp -o c2-exo7_main
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\c2-exo7_main.exe
=== MENU PRINCIPAL ===
1. nouvelle partie
2. charger
3. options
4. quitter
votre choix : 1
Nouvelle partie s├®lectionn├®e.
```

# execution apres avoir enlever un break
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\c2-exo7_main.exe
=== MENU PRINCIPAL ===
1. nouvelle partie
2. charger
3. options
4. quitter
votre choix : 1
Nouvelle partie s├®lectionn├®e.
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\c2-exo7_main.exe
=== MENU PRINCIPAL ===
1. nouvelle partie
2. charger
3. options
4. quitter
votre choix : 2 
Charger s├®lectionn├®.
options s├®lectionn├®.
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo7-le_menu> 
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo7-le_menu> .\c2-exo7_main.exe
=== MENU PRINCIPAL ===
1. nouvelle partie
2. charger
3. options
4. quitter
votre choix : 2
Charger s├®lectionn├®.
options s├®lectionn├®.
```
# changement observé:
a la deuxième entrée on observe que le programme s'exécute jusqu'au choix suivant (case 3);