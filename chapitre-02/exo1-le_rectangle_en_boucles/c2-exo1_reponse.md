# demonstration
   - code
   ```
#include <stdio.h>

#define LIGNE 3
#define COLONNE 4

int main() 
{
  for (int i = 1; i <= LIGNE; i++) 
  {
    for (int j = 1; j <= COLONNE; j++) 
    {
        if (i==1 || i==LIGNE || j==1 || j==COLONNE) 
        {
           printf(" # ");
        }
        else
        {
            printf("   ");
        }
    }
    printf(" \n");
  }
  return 0;
}
    
   ```
   - exécution
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo1-le_rectangle_en_boucles> clang++ c2-exo1_main.cpp -o c2-exo1_main          
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo1-le_rectangle_en_boucles> .\c2-exo1_main    
 #  #  #  #  
 #        #  
 #  #  #  #  
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo1-le_rectangle_en_boucles> 
```

# comparons 
nombre de ligne : '24'
a la demonstration 2 du chapitre 1 c'etaite plutot 12 lignes donc la moitié

# changement de dimension
- code 


 ```
     #include <stdio.h>

#define LIGNE 12
#define COLONNE 40

int main() 
{
  for (int i = 1; i <= LIGNE; i++) 
  {
    for (int j = 1; j <= COLONNE; j++) 
    {
        if (i==1 || i==LIGNE || j==1 || j==COLONNE) 
        {
           printf(" # ");
        }
        else
        {
            printf("   ");
        }
    }
    printf(" \n");
  }
  return 0;
}
```
- exécution
```
PS C:\Users\USER\Desktop\ani-1071\chapitre-02\exo1-le_rectangle_en_boucles> .\c2-exo1_main.exe
 #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #   #  #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #                                                                                                                    #  
 #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  #  
```