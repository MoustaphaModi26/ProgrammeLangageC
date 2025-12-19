#include <stdio.h>
#include "bibliotheque.h"

int main() {
    int choix;

    do {
        printf("\n++++++++++CHOISIR UNE FOCTION A EXECUTER++++++++\n");
        printf("1. Calcul de factorielle\n");
        printf("2. Elevation a une puissance\n");
        printf("3. Permutation de deux valeurs\n");
        printf("4. Equation du second degre\n");
        printf("5. Verifier si un nombre est pair\n");
        printf("6. Procedure de permutation deux entiers\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: {
                int n;
                printf("Entrez un entier : ");
                scanf("%d", &n);
                printf("Factorielle de %d = %lld\n", n, factorielle(n));
                break;
            }

            case 2: {
                double base;
                int exp;
                printf("Base : ");
                scanf("%lf", &base);
                printf("Exposant : ");
                scanf("%d", &exp);
                printf("Resultat = %.2lf\n", puissance(base, exp));
                break;
            }

            case 3: {
                int a, b;
                printf("Entrez a  b : ");
                scanf("%d %d", &a, &b);
                permutation(a, b);
                break;
            }

            case 4: {
                double a, b, c;
                printf("Entrez a b c : ");
                scanf("%lf %lf %lf", &a, &b, &c);
                equation_second_degre(a, b, c);
                break;
            }

            case 5: {
                int n;
                printf("Entrez un entier positif : ");
                scanf("%d", &n);
                if (estPair(n))
                    printf("%d est pair\n", n);
                else
                    printf("%d est impair\n", n);
                break;
            }

            case 6: {
                int a, b;
                printf("Entrez a  b : ");
                scanf("%d %d", &a, &b);
                echanger(&a, &b);
                printf("Apres echange : a = %d, b = %d\n", a, b);
                break;
            }

            case 0:
                printf("Fin du programme.\n");
                break;

            default:
                printf("Choix invalide.\n");
        }

    } while (choix != 0);

    return 0;
}