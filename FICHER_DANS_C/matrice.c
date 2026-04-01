#include <stdio.h>
#include <stdlib.h>
#include "matrice.h"


int taille(char nom){
    int n;
    printf("entrer le nombre de ligne  de la  matrice %c:",nom);
    scanf("%d",&n);
    return n;
}

int **remplir(int n,char nom){
    int i,j;
    int **A = malloc(n * sizeof(int *));
    for (i=0;i<n;i++){
        // 2. On alloue chaque ligne (les colonnes)
        A[i] = malloc(n * sizeof(int));

        for (j=0;j<n;j++){
            printf("entrer la valeur de %c[%d][%d]:",nom,i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    return A;
}
int **produit(int **X,int **Y,int n){
    int i,j,k;
    int **produit = malloc(n * sizeof(int *));
    for(i=0;i<n;i++){
        produit[i] = malloc(n*sizeof(int));
        for (j=0;j<n;j++){
            produit[i][j]=0;
            for (k=0;k<n;k++){
                produit[i][j] += X[i][k] * Y[k][j];
            }
        }
    }
     return produit;
}

int **somme(int **X, int **Y,int n){
     int i,j;
     int **somme= malloc(n * sizeof(int*));
    for (i=0;i<n;i++){
        somme[i]= malloc(n * sizeof(int));
        for (j=0;j<n;j++){
            somme[i][j]= X[i][j]+Y[i][j];

        }
    }
    return somme;
}


void affiche(int **Z,int n){
    int i,j;
    printf("Le produit de ces deux matrice est:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%4d ",Z[i][j]); // %4d c'est pour aligner les colonnes
        }
        printf("\n");
    }
}

void affiche_somme(int **S,int n){
    int i,j;
    printf("La somme de  ces deux matrices est :\n");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%4d",S[i] [j]);
        }
        printf(" \n");
    }
    
}