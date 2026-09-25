#include <iostream>

int main(){
    int nombre;
    int valeur;

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