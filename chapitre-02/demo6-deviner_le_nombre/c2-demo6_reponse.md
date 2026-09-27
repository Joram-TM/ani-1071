#include <iostream>
#include <cstdlib>

int main (){
    int nombre=rand() % 100 + 1;
    int val;

    std::cout << "entrer une valeur"<< std::endl;
    std::cin >> val;
    do {
        if (nombre > val){
        std::cout << "plus";
        } else if ( nombre < val) {
            std::cout << "moins";
        } else {
            std::cout << "vous avez trouve le nombre";
        }

    } while (nombre == val);

    return 0;
}