#include <cstdio>

int main (){

    printf ("int   : %zu octets\n", sizeof(int));
    printf ("bool   : %zu octets\n", sizeof(bool));
    printf ("float  : %zu octets\n", sizeof(float));
    printf ("char  : %zu octets\n", sizeof(char));
    printf ("long  : %zu octets\n", sizeof(long));
    printf ("double  : %zu octets\n", sizeof(double));
    printf ("unsigned char  : %zu octets\n", sizeof(unsigned char));
    printf ("long long  : %zu octets\n", sizeof(long long));
    printf ("long double  : %zu octets\n", sizeof(long double));
    printf ("short  : %zu octets\n", sizeof(short));
    printf ("unsigned int  : %zu octets\n", sizeof(unsigned int));
    printf ("void  :%zu octets\n", sizeof(void));
    return 0;
}

//PS C:\Users\New User\Desktop\COURS TEUGUIA\ani-1071\chapitre-02\demo3-le_tableau_des_tailles> clang++ c2-demo3_main.cpp -o taille
c2-demo3_main.cpp:17:36: error: invalid application of 'sizeof' to an incomplete
      type 'void'
   17 |     printf ("void  :%zu octets\n", sizeof(void));
      |                                    ^     ~~~~~~
1 error generated.

// apres avoir enleve la ligne du void , j'obtiens ceci
int   : 4 octets
bool   : 1 octets
float  : 4 octets
char  : 1 octets
long  : 4 octets
double  : 8 octets
unsigned char  : 1 octets
long long  : 8 octets
long double  : 16 octets
short  : 2 octets
unsigned int  : 4 octets

// un type de n octets peut contenir 2^(8n)
// un unsigned char (1 octet) peut contenir 256 valeurs distinctes (allant de 0 a 255)

// des  douuze le type << repute changer>> est le long 

// ce que cela peut couter a un programme qui compte sur sa taille : mal lire un fichier