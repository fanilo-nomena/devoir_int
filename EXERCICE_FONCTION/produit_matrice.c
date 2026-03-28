#include <stdio.h>
#include <stdlib.h>
int taille(char nom);
int **remplir(int n,char nom);
int **produit(int **X,int **Y,int n);
void affiche(int **Z,int n);
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
    affiche(Z,n);

    return 0;
}
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
void affiche(int **Z,int n){
    int i,j;
    printf("le produit des deux matrices est:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",Z[i][j]);
        }
        printf("\n");
    }
}