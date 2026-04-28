#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int charger_score(const char *nom) {
    FILE *f = fopen("scores.txt", "r");  /// Type FILE vers un Pointeur f pour que l'on ouvre le fichier scores.txt pour lire ce qu'il y'a dedans avec "r" pour le mode lecture
    if (!f) return 0;

    char ligne[200];
    char nom_f[50];
    int Point;
    char date[20], heure[20];

    while (fscanf(f, "%s %d %s %s", nom_f, &Point, date, heure) == 4) {   ///fscanf(f,.....) permet de lire les valeurs dans le fichier f qui est score.txt 
        if (strcmp(nom, nom_f) == 0) {   ///on compare les deux chaine de caractere
            fclose(f);
            return Point;
        }
    }

    fclose(f); ///fclose permet de fermer le fichier scores.txt
    return 0;
}
