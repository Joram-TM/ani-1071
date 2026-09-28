#include <iostream>

int main(){
    int r;

    std::cout << "entrer la valeur du rayon: ";
    std::cin >> r;

    for (int i = -r; i <= r; i++){
        for (int j = -r; j <= r; j++){
            if ( i*i + j*j <= r*r){
                std::cout << "#";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }


    return 0;
}

// apres execution, on obtient
entrer la valeur du rayon: 2
  #
 ###
#####
 ###
  #

// apres avoir mis deux caracteres par case,on obtient apres execution
entrer la valeur du rayon: 2
    ##
  ######
##########
  ######
    ##