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