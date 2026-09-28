#include <cstdio> 

int main ()
{
    int y = 10000;
    int v = 0;
    int g = -9810;
    int dt = 100;
    int nombre;

    for ( int tour = 0; y>0; tour++)
    {
        v += g * dt;
        y += v * dt;
        printf ("t = %.1d ms  y =%.2d mm\n", tour * dt, y);
    }
    printf ("entrer un nombre:");
    scanf ("%d", &nombre);
    return 0;
}

// l'execution de ce programme affiche 
t = 0 ms  y =-98090000 mm

// ici on remarque bien avec les int on obtient moins de valeurs qu'avec les double, alors c'etait plus benefique pour les generations de travailler avec les double car il y avait plus de details sur les valeurs  ce permettaient alors d'avoir des informations plus exactes sur les resultats des experiences