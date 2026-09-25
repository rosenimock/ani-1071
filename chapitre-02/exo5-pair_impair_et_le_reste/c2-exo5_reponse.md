# EXECUTION
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo5-pair_impair_et_le_reste> clang++ c2-exo5_main.cpp -o c2-exo5_main
c2-exo5_main.cpp:31:28: warning: more '%' conversions than data arguments [-Wformat-insufficient-args]
   31 |         printf("le nombre %d est divisible par 3.\n, n"):
      |                           ~^
c2-exo5_main.cpp:31:57: error: expected ';' after expression
   31 |         printf("le nombre %d est divisible par 3.\n, n"):
      |                                                         ^
      |                                                         ;
1 warning and 1 error generated.
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo5-pair_impair_et_le_reste> clang++ c2-exo5_main.cpp -o c2-exo5_main
c2-exo5_main.cpp:31:28: warning: more '%' conversions than data arguments [-Wformat-insufficient-args]
   31 |         printf("le nombre %d est divisible par 3.\n, n");
      |                           ~^
1 warning generated.
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo5-pair_impair_et_le_reste> clang++ c2-exo5_main.cpp -o c2-exo5_main
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo5-pair_impair_et_le_reste> .\c2-exo5_main.exe
Entrez un nombre entier : 0
Le nombre 0 est pair.
Le nombre 0 est nul.
le nombre 0 est divisible par 3.
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo5-pair_impair_et_le_reste> .\c2-exo5_main.exe
Entrez un nombre entier : -9
Le nombre -9 est impair.
Le nombre -9 est n├®gatif.
le nombre -9 est divisible par 3.
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo5-pair_impair_et_le_reste> .\c2-exo5_main.exe
Entrez un nombre entier : 10
Le nombre 10 est pair.
Le nombre 10 est positif.
le nombre 10 n'est pas divisible par 3.
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo5-pair_impair_et_le_reste> .\c2-exo5_main.exe
Entrez un nombre entier : 7
Le nombre 7 est impair.
Le nombre 7 est positif.
le nombre 7 n'est pas divisible par 3.
```