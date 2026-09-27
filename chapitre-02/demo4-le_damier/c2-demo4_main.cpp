#include <iostream>

int main(){


    for (int y = 1; y <= 16; y++){
        for (int x = 1; y <= 32; x++){
            char c = (x/4 + y/2) % 2 ? '#' : ' ';
            std::cout << c;
        }
        std::cout << "\n";
    }
    return 0;
}