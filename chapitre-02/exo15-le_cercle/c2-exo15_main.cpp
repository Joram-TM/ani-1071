#include <iostream>

int main(){
    int r;
    int num;

    std::cout << "entrer la valeur du rayon: ";
    std::cin >> r;

    for (int i = -r; i <= r; i++){
        for (int j = -r; j <= r; j++){
            if ( i*i + j*j <= r*r){
                std::cout << "##";
            } else {
                std::cout << "  ";
            }
        }
        std::cout << "\n";
    }
    std::cout <<"entrer un nombre";
    std::cin >> num;

    return 0;
}