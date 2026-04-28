#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void soustraction() {
    int a, b, resultat, reponse;
    printf("Soustraction\n");
    srand(time(NULL));
    
    a = rand() % 101; /// genere un nombre de facon pseudo-aléatoire ici de 0 à 100
    b = rand() % 101;   

    printf("%d - %d = ?\n", a, b);

    printf("Entrez le resultat : ");

    scanf("%d", &reponse);

    resultat = a - b;

    printf("Vous avez entre %d\n", reponse);

    if (reponse == resultat) {   /// on compare l'egalité des deux valeurs 
        printf("Bravo\n");
    } else {
        printf("Perdu, la bonne reponse etait %d\n", resultat);
    }
}
