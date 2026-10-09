

#include <stdlib.h>
typedef struct list_chaine list_chaine;
struct list_chaine {
    int valeur;
    list_chaine *suivant;
};

typedef struct list_chaine* compteur_binaire;

compteur_binaire init() {
    compteur_binaire comp = (compteur_binaire) malloc(sizeof(list_chaine));
    comp->valeur = 0;
    comp->suivant = NULL;
}


void print_compteur(compteur_binaire comp) {
    if (comp -> suivant) {
        print_compteur(comp -> suivant);
    }
}


void increment(compteur_binaire comp) {
    if (comp -> valeur == 0 ) {
        comp -> valeur = 1;
        comp->suivant = NULL;
    } else {
        if (comp -> suivant == NULL) {
            comp -> suivant = malloc(sizeof(list_chaine));
            comp -> suivant -> valeur  = 1;
            comp -> suivant -> suivant  = NULL;
        } else {
            increment(comp);
        }
    }
}

void decrement(compteur_binaire comp) {
    if (comp -> valeur == 1) {
        comp -> valeur = 0;
    } else {
    }
}
