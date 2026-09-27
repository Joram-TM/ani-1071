#include <cstdio>

int main(){


    for (int y = 1; y <= 16; y++){
        for (int x = 1; y <= 32; x++){
            char d = (x/4 + y/2) % 2 ? '#' : ' ';
            std::cout <<"d";
        }
        std::cout <<"\n";
    }
    return 0;
}

// la condition avec laquelle le motif s'obtient est:
 char d = (x/4 + y/2) % 2 ? '#' : ' ';
