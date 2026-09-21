# execution 
```
PS C:\Users\USER\Desktop> cd .\ani-1071\
PS C:\Users\USER\Desktop\ani-1071> cd .\chapitre-01\
PS C:\Users\USER\Desktop\ani-1071\chapitre-01> cd .\demo6-un_programme_qui_echoue_expres\ 
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> clang++ c1-demo6_reponse.md -o c1-demo6_reponse   
C:/msys64/ucrt64/bin/ld: C:/msys64/ucrt64/lib/libmingw32.a(lib64_libmingw32_a-crtexewin.o): in function `main':
D:/W/B/src/mingw-w64/mingw-w64-crt/crt/crtexewin.c:62:(.text.startup+0xc6): undefined reference to `WinMain'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> clang++ c1-demo6_reponse.md -o c1-demo6_reponse
C:/msys64/ucrt64/bin/ld: C:/msys64/ucrt64/lib/libmingw32.a(lib64_libmingw32_a-crtexewin.o): in function `main':
D:/W/B/src/mingw-w64/mingw-w64-crt/crt/crtexewin.c:62:(.text.startup+0xc6): undefined reference to `WinMain'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> clang++ c1-demo6_reponse.md -o mon programme   
clang++: error: no such file or directory: 'programme'
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> clang++ c1-demo6_reponse.md -o c1-demo6_main
C:/msys64/ucrt64/bin/ld: C:/msys64/ucrt64/lib/libmingw32.a(lib64_libmingw32_a-crtexewin.o): in function `main':
D:/W/B/src/mingw-w64/mingw-w64-crt/crt/crtexewin.c:62:(.text.startup+0xc6): undefined reference to `WinMain'
clang++: error: linker command failed with exit code 1 (use -v to see invocation)
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> clang++ c1-demo6_main.cpp -o c1-demo6_main  
c1-demo6_main.cpp:10:56: error: expected ')'
   10 |       printf("le nombre %d est impair. code de sortie:"1\n", nombre);
      |                                                        ^
c1-demo6_main.cpp:10:13: note: to match this '('
   10 |       printf("le nombre %d est impair. code de sortie:"1\n", nombre);
      |             ^
c1-demo6_main.cpp:10:59: warning: missing terminating '"' character [-Winvalid-pp-token]
   10 |       printf("le nombre %d est impair. code de sortie:"1\n", nombre);
      |                                                           ^
1 warning and 1 error generated.
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> clang++ c1-demo6_main.cpp -o c1-demo6_main
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> .\c1-demo6_main.exe
entrer un nombre:4
Le nombre 4 est pair. code de sortie: 0
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres> .\c1-demo6_main.exe
entrer un nombre:7
le nombre 7 est impair. code de sortie:1
PS C:\Users\USER\Desktop\ani-1071\chapitre-01\demo6-un_programme_qui_echoue_expres>
``` 