#include <stdio.h>
#include <math.h>
#include "bibliotheque.h"

//Factorielle
long long factorielle(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

//Puissance
double puissance(double base, int exposant) {
    double resultat = 1;
    for (int i = 0; i < exposant; i++)
        resultat *= base;
    return resultat;
}

//Permutation simple
void permutation(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Apres permutation : a = %d, b = %d\n", a, b);
}

//Equation du second degre
void equation_second_degre(double a, double b, double c) {
    double delta = b*b - 4*a*c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        printf("Deux solutions reelles : x1 = %.2lf, x2 = %.2lf\n", x1, x2);
    } 
    else if (delta == 0) {
        double x = -b / (2*a);
        printf("Solution unique : x = %.2lf\n", x);
    } 
    else {
        printf("Pas de solution réelle.\n");
    }
}

//Verification pair ou impair
int estPair(int n) {
    return (n % 2 == 0);
}

//Procedure de permutation avec pointeurs
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}