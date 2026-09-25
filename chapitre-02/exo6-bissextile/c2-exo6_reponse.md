#include <iostream>

int main(){
    int annee;
    int val;
    std::cout << "entrer l'annee:\n";
    std::cin >> annee;
    if (annee % 4 == 0 && annee % 100 != 0){
        std::cout << "cette annee est bissextile\n";
    } else {
        std::cout << "cette annee n'est pas bissextile\n";
    }
    std::cout <<"entrer une valeur\n ";
    std::cin >> val;
    return 0;
}

// pour l'annee 1900 
entrer l'annee:
1900
cette annee n'est pas bissextile

// pour l'annee 2000
entrer l'annee:
2000
cette annee n'est pas bissextile

// pour l'annee 2024
entrer l'annee:
2024
cette annee est bissextile

// pour l'annee 2100
entrer l'annee:
2100
cette annee n'est pas bissextile