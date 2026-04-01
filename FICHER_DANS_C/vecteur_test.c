#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main(){
    int n;
    n= taille();
    int *X,*Y,*C;
    X= valeur(n,'X');
    Y= valeur(n,'Y');
    C= somme(n,X,Y);
    printf("la somme du vecteur est : \n");
    affiche(n, C);
    int S;
    S= scalaire(n,X,Y);
    affiche_scalaire(S);
// toujours liberer la memoire apres un malloc
    free(X);
    free(Y);
    free(C);
    return 0;
}