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

// l'execution du programme donne:

2est un nombre premier
3est un nombre premier
5est un nombre premier
7est un nombre premier
11est un nombre premier
13est un nombre premier
17est un nombre premier
19est un nombre premier
23est un nombre premier
29est un nombre premier
31est un nombre premier
37est un nombre premier
41est un nombre premier
43est un nombre premier
47est un nombre premier
53est un nombre premier
59est un nombre premier
61est un nombre premier
67est un nombre premier
71est un nombre premier
73est un nombre premier
79est un nombre premier
83est un nombre premier
89est un nombre premier
97est un nombre premier

// il suffit de tester les diviseurs jusqu'a la racine carree car pour un nombre n tous ses diviseurs sont inferieurs a sa racine carree