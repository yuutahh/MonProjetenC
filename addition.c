#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void addition() {
    int a, b, resultat, reponse;
    printf("Addition\n");
    srand(time(NULL));
    
    a = rand() % 101;
    b = rand() % 101;   

    printf("%d + %d = ?\n", a, b);

    printf("Entrez le resultat : ");

    scanf("%d", &reponse);

    resultat = a + b;

    printf("Vous avez entre %d\n", reponse);

    if (reponse == resultat) {
        printf("Bravo\n");
    } else {
        printf("Perdu, la bonne reponse etait %d\n", resultat);
    }
}