#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sauvegarder_score(char *nom, int Point) {
    FILE *f = fopen("scores.txt", "a"); ///"a" en mode append pour ajouter des données a la fin du fichier
    if (!f) {
        printf("Erreur d'ouverture du fichier.\n");
        return;
    }

    time_t t = time(NULL); ///time_t est un type qui represente le temps en secondes écoulées avec time(NULL)qui permet de recupèrer l'heure actuelle stockée dans la valeur t
    struct tm *tm = localtime(&t); /// grace a localtime on recupère la date/heure puis on retourne un pointeur vers tm(structure) qui contient les elements de la date

    fprintf(f, "%s;%d;%04d-%02d-%02d;%02d:%02d\n",
            nom,
            Point,
            tm->tm_year + 1900,
            tm->tm_mon + 1,
            tm->tm_mday,
            tm->tm_hour,
            tm->tm_min);

    fclose(f);
}