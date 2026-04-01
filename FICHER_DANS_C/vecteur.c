#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int taille(){
    
    int n;
    printf("Entrer la dimension du tableau:");
    scanf("%d",&n);
    return n;
}
int *valeur(int n, char nom){
    int i;
    int *A= malloc(n*sizeof(int)); // Allocation dynamiqued'un tableau de taille n
    for(i=0;i<n;i++){
        printf("entrer la valeur de %c[%d]=",nom,i);
        scanf("%d",&A[i]);
    }
    printf("\n");
    return A;
}

int *somme(int n,int *X, int *Y){
    int i;
    int *C= malloc(n*sizeof(int));
    for (i=0;i<n;i++){
           C[i]= X[i]+ Y[i];
    }
    return C;
}

 int scalaire(int n,int *X, int *Y){
    int i;
    int C = 0;

    for(i = 0; i < n; i++){
        C += X[i] * Y[i];
    }

    return C;
}
void affiche(int n,int *C){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",C[i]);
    }
    printf("\n");
}
void affiche_scalaire(int C){
     printf("la valeur du produit scalaire est: %d",C);
}