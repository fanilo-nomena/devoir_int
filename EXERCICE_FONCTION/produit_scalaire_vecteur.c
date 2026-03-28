#include <stdio.h>
#include <stdlib.h>
int taille();
int *valeur(int n,char X);
int calcul(int n, int *X, int *Y);
void affiche(int C);

int main(){
    int n;
    n= taille();
    int *X = valeur(n,'X');
    int *Y = valeur(n,'Y');
    int C = calcul(n, X, Y);
    affiche(C);
    return 0;

}
int taille(){
    int n;
    printf("Entrer la dimension du vecteur:");
    scanf("%d",&n);
    return n;
}
int *valeur(int n,char X){
    int i;
    int *A=malloc(n*sizeof(int));// reserver un memoire pour A , 
    for(i=0;i<n;i++){
        printf("entrer la valeur de %c[%d]:",X,i);
        scanf("%d",&A[i]);
    }
    printf("\n");
    return A;
}

int calcul(int n, int *X, int *Y) {
    int i;
    int C = 0;

    for(i = 0; i < n; i++) {
        C += X[i] * Y[i];
    }

    return C;
}

void affiche(int C){
     printf("la valeur du produit scalaire est: %d",C);
}