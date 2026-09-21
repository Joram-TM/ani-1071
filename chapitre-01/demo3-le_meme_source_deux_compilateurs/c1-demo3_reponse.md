#include <cstdio>

int main(){
    printf("bonjour");
    return 0;
}
// la compilation avec clang++ donne un executable de 71 ko tandis la compilation avec g++ donne un executable de 72 ko

// on peut donc conclure que le language garantit la compilation du programme mais pas la taille de l'executable 