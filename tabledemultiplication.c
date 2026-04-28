#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void afficher_table(int choix2) {
    printf("Table de %d :\n", choix2);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", choix2, i, choix2 * i);
    }
}

int exercice_table(int choix2) {
    int i, rep;

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = ? ", choix2, i);
        scanf("%d", &rep);

        if (rep != choix2 * i) {  /// si la reponse donné n'est pas = au choix2 etant la table fois i alors printf...etc...
            printf("Mauvaise reponse, la bonne etait %d.\n", choix2 * i);
            return 0; // perdu
        }
    }
    return 1; // gagne
}
