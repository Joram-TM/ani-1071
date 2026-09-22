// PREMIER PROGRAMME

#include <cstdio>

int main(){
    printf ("More Fragile\n");
    return 0;
}

// programme qui inclut dix en-tete

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include <set>
#include <queue>
#include <cmath>
#include <random>
int main (){
     std::cout << "More Fragile " << std::endl;
    return 0;
}

//tableau des mesures

fichier              |	clang++ -E	   | clang++ -c	     | compilation complete
c1-demo5_main.cpp	 |352 millisecondes|321 millisecondes|367 milllisecondes
c1-demo5_dix_main.cpp|336 millisecondes|369 millisecondes|337 millisecondes

// d'apres les mesures on peut conclure que c'est l'etape -E qui domine