// j'utilise la boucle for 

#include <cstdio>

int main (){
    int n = 1;

    for (n = 1; n <= 20; n++){
        if (n % 3 != 0){
            printf("%d",n);
        }
    }
    return 0;
}

//la version que je lirai sans effort dans un mois est celle avec la boucle for