#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void addition() {
    int a, b, resultat, reponse;
    printf("Addition\n");
    srand(time(NULL)); /// cela sert a initialiser le générateur de nombres pseudo-aléatoires, donc en soit a générer des nombres différents de façon aléatoire a chaque lancement du programme
    
    a = rand() % 101; /// genere un nombre de facon pseudo-aléatoire ici de 0 à 100
    b = rand() % 101; /// genere un nombre de facon pseudo-aléatoire ici de 0 à 100 

    printf("%d + %d = ?\n", a, b);

    printf("Entrez le resultat : ");

    scanf("%d", &reponse); /// "&" permet de recupérer l'adresse mémoire de la variable ou elle est stocké

    resultat = a + b;

    printf("Vous avez entre %d\n", reponse);

    if (reponse == resultat) { \\\ "==" pour comparer l'égalité des deux variables
        printf("Bravo\n");
    } else {
        printf("Perdu, la bonne reponse etait %d\n", resultat);
    }
}
