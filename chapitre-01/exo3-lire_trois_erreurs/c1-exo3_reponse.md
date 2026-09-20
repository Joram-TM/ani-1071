// premiere_erreur
#include <cstdio>

int main(){
    printf("Bonjour")
    return 0;
}
// la ligne signalee est celle du "return 0" et la ligne reelement fautive est celle juste avant. l'etape de le chaine qui a parle est le compilateur

// deuxieme_erreur
#include <cstdio>

int main(){
    Printf("Bonjour");
    return 0;
}
//la ligne signalee est celle du printf et c'est aussi elle la fautive. l'etape de la chaine qui a parle est le compilateur

//troisieme_erreur


int main(){
    Printf("Bonjour");
    return 0;
}
//sans la ligne " #include <cstdio>" le fichier ne compile pas 