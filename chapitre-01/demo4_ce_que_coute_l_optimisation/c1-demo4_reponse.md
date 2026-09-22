#include <cstdio>

int main(){
    printf ("Hello\n");
    printf ("Bonjour\n");
    return 0;
}

// pour ce premier code, les deux compilations produisent des executables de 71 ko chacune et le temps de compilation est le meme pour les deux

// un programme qui fait un million d'addition
#include<cstdio>

int main (){
    int i, somme;
    somme=0;
    for (i=1; i<=1000000; i++){
        somme=somme+i ;
    }
    return 0;
}

//l'option -O2 ne change pas la taille de l'executable mais plutot le temps de compilation