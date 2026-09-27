#include <iostream>

int main (){
    int h;

    std::cout << "entrer la hauteur";
    std::cin >> h;

    for (int k = 0; k < h; k++){
        for ( int a = 0; a < h-k-1; a++){
            std::cout << " ";
        }
        for (int i = 0; i < 2 * k + 1; i++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}

// avec la hauteur 4, on obtient:
entrer la hauteur4
   *
  ***
 *****
*******