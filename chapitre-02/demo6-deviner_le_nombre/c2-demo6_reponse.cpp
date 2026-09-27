#include <iostream>
#include <cstdlib>

int main (){
    int nombre=rand() % 100 + 1;
    int val;
    int fois = 0;
    int combien;

    do {
        std::cout << "entrer une valeur"<< std::endl;
        std::cin >> val;

        if (nombre > val){
        std::cout << "plus\n";
        } else if ( nombre < val) {
            std::cout << "moins\n";
        } else {
            std::cout << "vous avez trouve le nombre";
            
        }
        fois = fois + 1;

    } while (nombre == val);
    std::cout << "le nombre d'essais est de\n" << fois;
    std::cout << "how";
    std::cin >> combien ;

    return 0;
}