#include <cstdio>

int main(){

    int i=1;
    int nombre; 
    double moyenne=0;
    int somme=0;

    for (i=1; i==5; i++){

        printf ("entrer un nombre:");
        scanf ("%d", &nombre);
        somme=somme+nombre;
    }
    printf ("la somme vaut %d", somme);
    moyenne=somme/5 ;
    return 0;
}