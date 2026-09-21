#include <cstdio>

int main(){
    int a,b,c;
    printf("entrer un nombre");
    scanf("%d", &a);
    printf("entrer un autre nombre");
    scanf("%d", &b);
    a=a*b;
    printf("le produit est %d", a);
    return 0;
}

//un avertissement est signale
PS C:\Users\New User\Desktop\COURS TEUGUIA\ani-1071\chapitre-01\exo10-les_avertissements> clang++ c1-exo10_main.cpp -Wall -Wextra
c1-exo10_main.cpp:4:13: warning: unused variable 'c' [-Wunused-variable]
    4 |     int a,b,c;
      |             ^
1 warning generated.

//la difference entre un avertissement et une erreur que l'erreur arrete la compilation. l'avertissememt donc pour une meilleure redaction des codes 