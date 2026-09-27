#include <cstdio> 

int main ()
{
    double y = 100.0;
    double v = 0.0;
    double g = -9.81;
    double dt = 1.0;
    int nombre;

    for ( int tour = 0; y>0.0; tour++)
    {
        v += g * dt;
        y += v * dt;
        printf ("t = %.1f s  y =%.2f m\n", tour * dt, y);
    }
    printf ("entrer un nombre:");
    scanf ("%d", &nombre);
    return 0;
}