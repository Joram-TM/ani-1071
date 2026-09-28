#include <cstdio>

int main (){
    int a;
    int b;
    int num;

    printf ("entrer le grand nombre");
    scanf ("%d", &a);
    printf("entrer le petit nombre");
    scanf ("%d", &b);

    int x = a;
    int y = b;

    while (y != 0){
        int r = x % y;
        x = y;
        y = r;
    }
    printf ("le pgcd de ces nombres est %d", x);
    printf("entrer");
    scanf("%d", &num);
    return 0;
}
