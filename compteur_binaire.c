

#include <stdlib.h>
typedef struct list_chaine list_chaine;
struct list_chaine {
    int valeur;
    list_chaine *suivant;
};

typedef list_chaine* compteur_binaire;

compteur_binaire init() {
    compteur_binaire comp = (compteur_binaire) malloc(sizeof(list_chaine));
    comp->valeur = 0;
    comp->suivant = NULL;
}





void increment(compteur_binaire comp) {
    if (comp -> valeur == 0) {
        comp -> valeur = 1;
    } else {
        comp -> valeur = 0;
        if (comp -> suivant == NULL) {
            compteur_binaire nouveau_compteur = malloc(sizeof(list_chaine));
            nouveau_compteur -> valeur = 1;
            nouveau_compteur -> suivant = NULL;
            comp -> suivant = nouveau_compteur;
        } else {
            increment(comp -> suivant);
        }
    }
}

void decrement(compteur_binaire comp) {
    if (comp -> valeur == 1) {
        comp -> valeur = 0;
    } else {
        comp -> valeur = 1;
        if (comp -> suivant == NULL) {
            comp -> suivant = 0;
        } else {
            decrement(comp -> suivant);
        }
    }
}
