#include <iostream>

int main(){
    int nombre;

    std::cout<< "entrez le nombre:";
    std::cin >> nombre;
    if (nombre%2==0){
        std::cout << "ce nombre est pair" << std::endl;
    } else{
        std::cout << "ce nombre est impair" << std::endl;
    }
    if (nombre==0){
        std::cout << " ce nombre est nul" << std::endl;
    } 
    else if(nombre>0){
        std::cout<< "Ce nombre est positif" << std::endl;
    } else {
        std::cout << "ce nombre est negatif" << std::endl;
    }
    if (nombre%3==0){
        std::cout <<"ce nombre est divisible par 3" << std::endl;
    } else {
        std::cout <<"ce nombre n'est pas divisible par 3" << std::endl;
    }
    return 0;
}

// pour la valeur 12
entrez le nombre:12
ce nombre est pair
Ce nombre est positif
ce nombre est divisible par 3

// pour la valeur -9
entrez le nombre:-9
ce nombre est impair
ce nombre est negatif
ce nombre est divisible par 3

//pour la valeur 0
ce nombre est pair
 ce nombre est nul
ce nombre est divisible par 3

// pour la valeur 7
entrez le nombre:7
ce nombre est impair
Ce nombre est positif
ce nombre n'est pas divisible par 3