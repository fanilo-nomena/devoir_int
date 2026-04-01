#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"
int main(){
    int n,m;
    int **X,**Y;
    n=taille('X');
    m=taille('Y');
    X=remplir(n,'X');
    Y=remplir(m,'Y');
    if (n!=m){
        printf("les matrices ne sont pas compatibles pour le produit");
        return 1;
    }
    int **Z = produit(X,Y,n);
    int **S;
    S=somme(X,Y,n);
    affiche(Z,n);
    affiche_somme(S,n);

    return 0;
}
