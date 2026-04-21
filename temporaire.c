#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tabledemultiplication() {
    int choix2 = -1;
    
    while (choix2 != 0){
        printf("+-------------------------------------------+\n");
        printf("|1 : Table de 1                             |\n");
        printf("|2 : Table de 2                             |\n");
        printf("|3 : Table de 3                             |\n");
        printf("|4 : Table de 4                             |\n");
        printf("|5 : Table de 5                             |\n");
        printf("|6 : Table de 6                             |\n");
        printf("|7 : Table de 7                             |\n");
        printf("|8 : Table de 8                             |\n");
        printf("|9 : Table de 9                             |\n");
        printf("|10 : Table de 10                           |\n");
        printf("|0 : Sortir du jeu                          |\n");
        printf("+-------------------------------------------+\n");
        printf("Quel est votre choix ?\n");
        scanf("%d", &choix2);

        switch (choix2) {
                case 1 :
                    printf("+-------------------------------------------+\n");
                    printf("| 1x1 = 1                                   |\n");
                    printf("| 1x2 = 2                                   |\n");
                    printf("| 1x3 = 3                                   |\n");
                    printf("| 1x4 = 4                                   |\n");
                    printf("| 1x5 = 5                                   |\n");
                    printf("| 1x6 = 6                                   |\n");
                    printf("| 1x7 = 7                                   |\n");
                    printf("| 1x8 = 8                                   |\n");
                    printf("| 1x9 = 9                                   |\n");
                    printf("| 1x10 = 10                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 2 :  
                    printf("+-------------------------------------------+\n");
                    printf("| 2x1 = 2                                   |\n");
                    printf("| 2x2 = 4                                   |\n");
                    printf("| 2x3 = 6                                   |\n");
                    printf("| 2x4 = 8                                   |\n");
                    printf("| 2x5 = 10                                  |\n");
                    printf("| 2x6 = 12                                  |\n");
                    printf("| 2x7 = 14                                  |\n");
                    printf("| 2x8 = 16                                  |\n");
                    printf("| 2x9 = 18                                  |\n");
                    printf("| 2x10 = 20                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 3 : 
                    printf("+-------------------------------------------+\n");
                    printf("| 3x1 = 3                                   |\n");
                    printf("| 3x2 = 6                                   |\n");
                    printf("| 3x3 = 9                                   |\n");
                    printf("| 3x4 = 12                                  |\n");
                    printf("| 3x5 = 15                                  |\n");
                    printf("| 3x6 = 18                                  |\n");
                    printf("| 3x7 = 21                                  |\n");
                    printf("| 3x8 = 24                                  |\n");
                    printf("| 3x9 = 27                                  |\n");
                    printf("| 3x10 = 30                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 4 : 
                    printf("+-------------------------------------------+\n");
                    printf("| 4x1 = 4                                   |\n");
                    printf("| 4x2 = 8                                   |\n");
                    printf("| 4x3 = 12                                  |\n");
                    printf("| 4x4 = 16                                  |\n");
                    printf("| 4x5 = 20                                  |\n");
                    printf("| 4x6 = 24                                  |\n");
                    printf("| 4x7 = 28                                  |\n");
                    printf("| 4x8 = 32                                  |\n");
                    printf("| 4x9 = 36                                  |\n");
                    printf("| 4x10 = 40                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 5 :  
                    printf("+-------------------------------------------+\n");
                    printf("| 5x1 = 5                                   |\n");
                    printf("| 5x2 = 10                                  |\n");
                    printf("| 5x3 = 15                                  |\n");
                    printf("| 5x4 = 20                                  |\n");
                    printf("| 5x5 = 25                                  |\n");
                    printf("| 5x6 = 30                                  |\n");
                    printf("| 5x7 = 35                                  |\n");
                    printf("| 5x8 = 40                                  |\n");
                    printf("| 5x9 = 45                                  |\n");
                    printf("| 5x10 = 50                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 6 : 
                    printf("+-------------------------------------------+\n");
                    printf("| 6x1 = 6                                   |\n");
                    printf("| 6x2 = 12                                  |\n");
                    printf("| 6x3 = 18                                  |\n");
                    printf("| 6x4 = 24                                  |\n");
                    printf("| 6x5 = 30                                  |\n");
                    printf("| 6x6 = 36                                  |\n");
                    printf("| 6x7 = 42                                  |\n");
                    printf("| 6x8 = 48                                  |\n");
                    printf("| 6x9 = 54                                  |\n");
                    printf("| 6x10 = 60                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 7 :  
                    printf("+-------------------------------------------+\n");
                    printf("| 7x1 = 7                                   |\n");
                    printf("| 7x2 = 14                                  |\n");
                    printf("| 7x3 = 21                                  |\n");
                    printf("| 7x4 = 28                                  |\n");
                    printf("| 7x5 = 35                                  |\n");
                    printf("| 7x6 = 42                                  |\n");
                    printf("| 7x7 = 49                                  |\n");
                    printf("| 7x8 = 56                                  |\n");
                    printf("| 7x9 = 63                                  |\n");
                    printf("| 7x10 = 70                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 8 : 
                    printf("+-------------------------------------------+\n");
                    printf("| 8x1 = 8                                   |\n");
                    printf("| 8x2 = 16                                  |\n");
                    printf("| 8x3 = 24                                  |\n");
                    printf("| 8x4 = 32                                  |\n");
                    printf("| 8x5 = 40                                  |\n");
                    printf("| 8x6 = 48                                  |\n");
                    printf("| 8x7 = 56                                  |\n");
                    printf("| 8x8 = 64                                  |\n");
                    printf("| 8x9 = 72                                  |\n");
                    printf("| 8x10 = 80                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 9 :
                    printf("+-------------------------------------------+\n");
                    printf("| 9x1 = 9                                   |\n");
                    printf("| 9x2 = 18                                  |\n");
                    printf("| 9x3 = 27                                  |\n");
                    printf("| 9x4 = 36                                  |\n");
                    printf("| 9x5 = 45                                  |\n");
                    printf("| 9x6 = 54                                  |\n");
                    printf("| 9x7 = 63                                  |\n");
                    printf("| 9x8 = 72                                  |\n");
                    printf("| 9x9 = 81                                  |\n");
                    printf("| 9x10 = 90                                 |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break; 
                case 10 : 
                    printf("+-------------------------------------------+\n");
                    printf("| 10x1 = 10                                 |\n");
                    printf("| 10x2 = 20                                 |\n");
                    printf("| 10x3 = 30                                 |\n");
                    printf("| 10x4 = 40                                 |\n");
                    printf("| 10x5 = 50                                 |\n");
                    printf("| 10x6 = 60                                 |\n");
                    printf("| 10x7 = 70                                 |\n");
                    printf("| 10x8 = 80                                 |\n");
                    printf("| 10x9 = 90                                 |\n");
                    printf("| 10x10 = 100                               |\n");
                    printf("| 0 : Sortir du jeu                         |\n");
                    printf("+-------------------------------------------+\n"); break;
                case 0 : printf("Sortir du jeu\n"); break;
        }


    }
}
 