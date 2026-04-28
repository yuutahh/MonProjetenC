#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sauvegarder_score(char *nom, int Point) {  /// *nom qui est le nom que donne le joueur lors de l'enregistrement
    FILE *f = fopen("scores.txt", "a"); /// "a" en mode append pour ajouter des données a la fin du fichier
    if (!f) {
        printf("Erreur d'ouverture du fichier.\n"); /// si il n'y a pas de fichier on retourne une erreur d'ouverture et sort du if pour arriver au fclose(f); pour sortir du fichier et sortir de la fonction
        return;
    }

    time_t t = time(NULL); /// time_t est un type qui represente le temps en secondes écoulées avec time(NULL)qui permet de recupèrer l'heure actuelle stockée dans la valeur t
    struct tm *tm = localtime(&t); /// grace a localtime on recupère la date/heure puis on retourne un pointeur vers tm(structure) qui contient les elements de la date

    fprintf(f, "%s;%d;%04d-%02d-%02d;%02d:%02d\n",   ///fprintf permet d'ecrire dans le fichier les valeurs
            nom,
            nom,
            Point,
            tm->tm_year + 1900, ///time_t est un type qui represente le temps en secondes écoulées avec time(NULL)qui permet de recupèrer l'heure actuelle stockée dans la valeur t
            tm->tm_mon + 1, /// grace a localtime on recupère la date/heure puis on retourne un pointeur vers tm(structure) qui contient les elements de la date
            tm->tm_mday,
            tm->tm_hour,
            tm->tm_min);

    fclose(f);  ///fclose pour sortir du fichier .txt
}
