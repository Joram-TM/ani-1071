#include <cstdio>

int main(){
    printf ("Hello\n");
    printf ("Bonjour\n");
    return 0;
}

// pour ce premier code, la compilation avec l'option -O2 on a un excutable de 71 ko et un temps de compilation est de 127.0332 millisecondes et sans l'option -O2 on obtient un executable de 71 ko et le temps de compilation est de 105.3961 millisecondes

// un programme qui fait un million d'addition
#include<cstdio>

int main (){
    int i, somme;
    somme=0;
    for (i=1; i<=1000000; i++){
        somme=somme+i ;
    }
     printf("la somme est %d\n");
    return 0;
}

// pour ce deuxieme programme, avec l'option -O2 on a un executable de 37 ko et un temps de compilation qui vaut 97.1546 milliseconds tandis que sans cette option on a un executable de 37 ko et un temps dde compilation qui vaut 85.3662 millisecondes

//l'option -O2 ne change pas la taille de l'executable mais plutot le temps de compilation