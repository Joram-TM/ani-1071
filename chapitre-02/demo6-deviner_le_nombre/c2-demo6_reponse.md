#include <iostream>
#include <cstdlib>

int main (){
    int nombre=rand() % 100 + 1;
    int val;
    int fois = 0;

    do {
        std::cout << "entrer une valeur"<< std::endl;
        std::cin >> val;

        if (nombre > val)
        {

        std::cout << "plus\n";
        
        } else if ( nombre < val) {
            std::cout << "moins\n";
        } else {
            std::cout << "vous avez trouve le nombre\n";
            
        }
        fois = fois + 1;

     } while(nombre != val);
    std::cout << "le nombre d'essais est de\n" << fois;

    return 0;
}

entrer une valeur
50
moins
entrer une valeur
43
moins
entrer une valeur
23
plus
entrer une valeur
30
plus
entrer une valeur
39
plus
entrer une valeur
40
plus
entrer une valeur
41
plus
entrer une valeur
42
vous avez trouve le nombre
le nombre d'essais est de
8
le nombre minimal d'essai qui garantit de trouver est est 50