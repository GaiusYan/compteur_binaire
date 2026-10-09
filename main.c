#include <iso646.h>
# include <stdio.h>
# include "compteur_binaire.c"
#include <assert.h>

int main() {

    compteur_binaire compteur = init();
    assert(compteur);
    increment(compteur);
    assert(compteur -> valeur == 1);
    increment(compteur);
    return 0;
}