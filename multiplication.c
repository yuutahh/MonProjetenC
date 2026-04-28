#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplication() {
    int a, b, resultat, reponse;
    printf("Multiplication\n");
    srand(time(NULL));
    
    a = rand() % 10 + 1; /// nombre aléatoire de 1 à 10
    b = rand() % 10 + 1; /// nombre aléatoire de 1 à 10

    printf("%d x %d = ?\n", a, b);

    printf("Entrez le resultat : ");

    scanf("%d", &reponse);

    resultat = a * b;

    printf("Vous avez entre %d\n", reponse);

    if (reponse == resultat) {
        printf("Bravo\n");
    } else {
        printf("Perdu, la bonne reponse etait %d\n", resultat);
    }
}
