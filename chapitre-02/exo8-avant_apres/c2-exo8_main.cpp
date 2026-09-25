#include <cstdio>

int main (){
    
    int a = 3;
    int b = a++ + 1;
    int c = ++a * 2;
    int d = a-- - --a;
    
    printf ("la valeur de a est %d\n", a);
    printf ("la valeur de b est %d\n", b);
    printf ("la valeur de c est %d\n", c);
    printf ("la valeur de d est %d\n", d);

    return 0;
}