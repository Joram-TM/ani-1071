#include <cstdio>

int main(){
    int calculer();
    printf("Hello");
    printf("Bonjour");
    printf("guten morgen");
    printf("good morning");
    return 0;
}

// un avertissement est signale quand le code est compiler avec -c et il en est de meme llorsque je compile sans -c

c1-exo8_main.cpp:4:17: warning: empty parentheses interpreted as a function
      declaration [-Wvexing-parse]
    4 |     int calculer();
      |                 ^~
c1-exo8_main.cpp:4:17: note: replace parentheses with an initializer to declare a
      variable
    4 |     int calculer();
      |                 ^~
      |                  = 0
1 warning generated.

// c'est le compilateur qui parle