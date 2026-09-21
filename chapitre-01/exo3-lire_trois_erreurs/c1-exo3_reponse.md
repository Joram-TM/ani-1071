// premiere_erreur

#include <cstdio>

int main(){
    printf("Bonjour")
    return 0;
}

//message exact 1

c1-exo3_main.cpp:3:22: error: expected ';' after expression
    3 |     printf("bonjour")
      |                      ^
      |                      ;
1 error generated.

// la ligne signalee est la fautive,celle du printf. l'etape de le chaine qui a parle est le compilateur qui signale bien l'absence du point virgule

// deuxieme_erreur

#include <cstdio>

int main(){
    Printf("Bonjour");
    return 0;
}

//message excat 2

c1-exo3_main.cpp:3:5: error: use of undeclared identifier 'Printf'; did you mean
      'printf'?
    3 |     Printf("bonjour");
      |     ^~~~~~
      |     printf
C:/msys64/ucrt64/include/stdio.h:300:5: note: 'printf' declared here
  300 | int printf (const char *__format, ...)
      |     ^
1 error generated.

//la ligne signalee est celle du printf et c'est aussi elle la fautive. l'etape de la chaine qui a parle est le compilateur

//troisieme_erreur


int main(){
    Printf("Bonjour");
    return 0;
}

//message exact 3

c1-exo3_main.cpp:3:5: error: use of undeclared identifier 'printf'
    3 |     printf("bonjour");
      |     ^~~~~~
1 error generated.

//sans la ligne " #include <cstdio>" la ligne signalee est celle du printf, la ligne reelement fautive est le ligne qui a ete supprimee et la chaine qui a parle est le compilateur