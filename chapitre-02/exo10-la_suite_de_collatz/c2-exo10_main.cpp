#include <cstdio>

int main (){
    int n;

    printf("entrer un nombre superieur a 1");
    scanf ("%d", &n);

    do{
        if(n % 2 ==0){
            n = n/2;
        } else {
            n = 3 * n + 1;
        }
    }
    while ( n != 1);

    return 0;
}