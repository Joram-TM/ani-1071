#include <iostream>

int main(){
    int val;

    std::cout << "taper 1 pour une nouvelle partie, taper 2 pour charger, taper 3 pour voir les options, taper 4 pour quitter" <<std::endl;
    std::cin >> val;
    switch (val){
        case 1:
        std::cout << "nouvelle partie\n";
        break;
        case 2:
        std::cout << "change\n";
        break;
        case 3:
        std::cout << "options\n";
        break;
        case 4:
        std::cout << "quitter\n";
        break;
        default:
        std::cout << "aucune correspondance\n";
        break;
    }

    return 0;
}

// pour le chiffre 3, on a 

taper 1 pour une nouvelle partie, taper 2 pour charger, taper 3 pour voir les options, taper 4 pour quitter
3
options

// pour le chiffre 5, on a

taper 1 pour une nouvelle partie, taper 2 pour charger, taper 3 pour voir les options, taper 4 pour quitter
5
aucune correspondance

// apres avoir retirer le break de la ligne 18 et entrer la valeur 3, j'obtiens 
taper 1 pour une nouvelle partie, taper 2 pour charger, taper 3 pour voir les options, taper 4 pour quitter
3
options
quitter

//dans ce cas on obtient deux affichage au lieu d'un