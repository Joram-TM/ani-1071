#include <iostream>
#include <cstdlib>

int main (){
    int nombre=rand() % 100 + 1;
    int val;
    int okn;

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
        std::cout << "entrer une valeur"<< std::endl;
        std::cin >> val;
        val = val;

    } while (nombre == val);
    std::cout << "entrer une valeur";
    std::cin >> okn ;

    return 0;
}

