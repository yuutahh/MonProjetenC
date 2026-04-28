#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void divisions() {
    int a, b, resultat, reponse;
    printf("Divisions\n");
    srand(time(NULL));
    
    a = rand() % 11;      /// de 0 a 10 inclus
    b = rand() % 10 + 1;  /// de 1 à 10

    printf("%d / %d = ?\n", a, b);

    printf("Entrez le resultat : ");

    scanf("%d", &reponse);

    resultat = a / b;

    printf("Vous avez entre %d\n", reponse);

    if (reponse == resultat) {
        printf("Bravo\n");
    } else {
        printf("Perdu, la bonne reponse etait %d\n", resultat);
    }
}
