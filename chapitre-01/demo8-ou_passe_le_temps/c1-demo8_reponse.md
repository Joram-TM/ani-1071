#include <iostream>

int main(){

    std::cout << "Bonjour" << std::endl ;

    return 0;
}

// pour  ce premier programme le temps d'execution est de 223.072 millisecondes et le temps de compilations est de 1356.0728 millisecondes. on remarque donc que la compilation a une duree superieur a celle de l'execution

// pour un fichier qui inclut 5 en-tetes, l'execution prends 1683.5275 millisecondeset la compilation 63.9535 millisecondes

// pour un projet reel on cherche surtout a reduire le temps de compilation parceque c'est elle qui prends plus de temps et encore plus lorsque pluusieurs bibliotheques sont utilises