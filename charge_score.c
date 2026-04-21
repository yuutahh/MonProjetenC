#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int charger_score(const char *nom) {
    FILE *f = fopen("scores.txt", "r");/// ici logiquement "r" pour le mode lecture
    if (!f) return 0;

    char ligne[200];
    char nom_f[50];
    int Point;
    char date[20], heure[20];

    while (fscanf(f, "%s %d %s %s", nom_f, &Point, date, heure) == 4) {
        if (strcmp(nom, nom_f) == 0) {   ///on compare les deux chaine de caractere
            fclose(f);
            return Point;
        }
    }

    fclose(f);
    return 0;
}
///a mettre dans le main:
///char nom[50];
///printf("Entrez votre nom : ");
///scanf("%s", nom);

///int score = charger_score(nom);
///printf("Bienvenue %s, votre score actuel est : %d\n", nom, score);

///score += points_gagnes;
///sauvegarder_score(nom, score);
