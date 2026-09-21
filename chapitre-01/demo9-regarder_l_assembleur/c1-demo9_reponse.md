#include <cstdio>

int main(){
    printf("Bonjour");
    return 0;
}

// l'etiquette main
.globl	main                            # -- Begin function main

//l'appel a printf
.section	.rdata,"dr"
.L.str:                                 # @.str
	.asciz	"Bonjour"

// la valeur de retour
.short	22018                           # Backend version
	.short	0
	.short	0
	.short	0