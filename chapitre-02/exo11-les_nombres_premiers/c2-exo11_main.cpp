#include <iostream>
#include <cmath>

int main (){
    int num;
    bool premier = false;
    int j;

    for (int i = 2; i <= 100; i++ ){
        premier  = true;
        for ( j = 2; j <= std::sqrt(i); j++){
            if(i % j == 0){
                premier = false;
                break;  
            }
        }
        if (premier){
            std::cout << i << "est un nombre premier" << std::endl;
        }
    }
    std::cout <<"entrer";
    std::cin >> num;
    return 0;
}