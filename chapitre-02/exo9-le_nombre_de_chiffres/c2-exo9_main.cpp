#include <cstdio>

int main (){
 int nombre;
 int chiffre;

    printf ("entrer votre nombre:");
    scanf ("%d",&nombre);
    chiffre=0;
    do {
        nombre=nombre/10;
        chiffre=chiffre+1;
    } while (nombre > 0);
    printf ("ce nombre comporte %d chiffres" , chiffre);

    return 0;
}