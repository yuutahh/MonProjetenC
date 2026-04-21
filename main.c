#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "addition.h"
#include "multiplication.h"
#include "soustraction.h"
#include "divisions.h"
#include "tabledemultiplication.h"
#include "save_score.h"
#include "charge_score.h"

//gcc main.c addition.c -o Projet_v2

int main()
{
    system("chcp 65001");
    int choix = -1;
    int choix2 = 0;
    int points_gagnes = 0;
    int exercice_table();
    char nom[50];

    printf("Entrez votre nom : ");
    scanf("%s", nom);

    int Point = charger_score(nom);

    printf("Bienvenue %s, votre score actuel est : %d\n", nom, Point);
    Point += points_gagnes;
    sauvegarder_score(nom, Point);

    while (choix != 0) {
        printf("Vos Points : %d\n",Point);
        printf("+-------------------------------------------+\n");
        printf("|1 : Addition                               |\n");
        printf("|2 : Soustraction                           |\n");
        printf("|3 : Multiplication                         |\n");
        printf("|4 : Tables de multiplications              |\n");
        printf("|5 : Divisions                              |\n");
        printf("|0 : Sortir du jeu                          |\n");
        printf("+-------------------------------------------+\n");
        printf("Quel est votre choix ?\n");
        scanf("%d", &choix);

        Point = Point + 1;

        switch (choix) {
            case 1 : addition(); break;
            case 2 : soustraction(); break;
            case 3 : multiplication(); break;
            case 4 : 
            printf("Choisissez une table (1 a 10) : ");
            scanf("%d", &choix2);
            if (choix2 < 1 || choix2 > 10) {
                printf("Table invalide.\n");
            } else {
                afficher_table(choix2);
                printf("\nMaintenant, donnez les resultats dans l'ordre.\n");
                if (exercice_table(choix2)) {
                    printf("Gagne !\n");
                    Point++;
                    printf("Vous gagnez 1 point ! Score = %d\n", Point);
                } else {
                    printf("Perdu !\n");
                }
            }; break;      
            case 5 : divisions(); break;
            case 0 : printf("Sortir du jeu\n"); break;
        } 

    }
    return 0;
}