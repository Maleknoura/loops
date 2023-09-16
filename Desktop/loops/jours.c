#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialiser le générateur de nombres aléatoires
    srand(time(NULL));

    int nombreAleatoire = rand() % 7;

    char* jours[7] = {
        "Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"
    };

    printf("Le jour de la semaine est : %s\n", jours[nombreAleatoire]);

    return 0;
}