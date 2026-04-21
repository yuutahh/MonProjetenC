#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///void afficher_table(int n) {
    printf("Table de %d :\n", n);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

void exercice_table(int n) {
    int reponse;
    int correct = 1;

    printf("Exercice : donnez les résultats de la table de %d\n", n);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = ", n, i);
        scanf("%d", &reponse);

        if(reponse != n * i) {
            correct = 0;
        }
    }

    if(correct) {
        printf("Gagné !\n");
        return 1;   // 1 point
    } else {
        printf("Perdu !\n");
        return 0;
    }
}
/// a mettre dans le main/programme principal
int choix = 0;
int score = 0;

printf("Choisissez une table (1 à 10) : ");
scanf("%d", &choix);

afficher_table(choix);
score += exercice_table(choix);
