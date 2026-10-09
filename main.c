#include <iso646.h>
# include <stdio.h>
# include "compteur_binaire.c"
#include <assert.h>


void print_compteur(compteur_binaire comp) {
    while (comp -> valeur) {
        printf("%d",comp -> valeur);
        comp = comp -> suivant;
    }
}


int main() {

    compteur_binaire compteur = init();
    assert(compteur);
    increment(compteur);
    assert(compteur -> valeur == 1);
    increment(compteur);
    //assert(compteur -> valeur == 0);
    increment(compteur);
    increment(compteur);
    increment(compteur);
    increment(compteur);

    decrementer(compteur);
    decrementer(compteur);
    decrementer(compteur);
    decrementer(compteur);
    return 0;
}