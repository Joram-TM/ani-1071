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

// pour 7, on a 
entrer votre nombre:7
ce nombre comporte 1 chiffre

// pour 42, on a
entrer votre nombre:42
ce nombre comporte 2 chiffres

// pour 1000, on a 
entrer votre nombre:1000
ce nombre comporte 4 chiffres

// pour 2147483647, on a
entrer votre nombre:2147483647
ce nombre comporte 10 chiffres