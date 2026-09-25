#include <cstdio>

int main(){

    int i=1;
    int nombre; 
    double moyenne=0;
    double somme=0;

    for (i=1; i<=5; i++){

        printf ("entrer un nombre:");
        scanf ("%d", &nombre);
        somme=somme+nombre;
    }
    printf ("la somme vaut %f", somme);
    moyenne=somme/5 ;
    printf (" la moyenne vaut %f", moyenne);
    
    return 0;
}