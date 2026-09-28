#include <iostream>
#include <string>

int main(){
    int x;
    int y;
    int position;
    
    std::string degrade = ".:-=+_#@";
    for ( y=0; y<4; y++){
        for (x = 0; x < 60; x++){
            position = x * 9 / 60;
            std::cout << degrade[position];
        }
        std::cout << "\n";
    }

    return 0;
}