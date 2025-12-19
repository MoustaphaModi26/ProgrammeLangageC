#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

//Fonction de calcul de factorielle 
long long factorielle(int n);

//Fonction d'elevation à une puissance 
double puissance(double base, int exposant);

//Fonction de permutation de deux valeurs (retour par structure) 
void permutation(int a, int b);

//Fonction de résolution d'une equation du second degre 
void equation_second_degre(double a, double b, double c);

//Fonction qui vérifie si un entier positif est pair ou impair
int estPair(int n);

//Procédure de permutation (échange)
void echanger(int *a, int *b);

#endif