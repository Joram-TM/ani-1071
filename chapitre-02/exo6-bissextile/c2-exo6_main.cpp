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