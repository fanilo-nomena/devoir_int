#include <stdio.h>
#include <stdlib.h>
int taille(char nom);
int **remplir(int n,char nom);
int **somme(int **X, int **Y,int n);
void affiche(int **S,int n);
int main(){
    int n,m;
    int **X, **Y;
    n=taille('X');
    m=taille('Y');
    X= remplir(n,'X');
    Y= remplir(m,'Y');
    if (n != m){
        printf("On ne peut pas faire une somme car X et Y ne sont pas de meme dimension");
    }
    int **S;
    S=somme(X,Y,n);
    affiche(S,n);
    return 0;
}
int taille(char nom){
    int n;
    printf("entrer la longueur de la matrice %c:",nom);
    scanf("%d",&n);
    return n;
}
int **remplir(int n,char nom){
    int i,j;
    int **A= malloc(n * sizeof(int *));
    for (i=0;i<n;i++){
         A[i]= malloc(n * sizeof(int));
        for (j=0;j<n;j++){
           printf("entrer la valeur de %c[%d][%d]=",nom,i,j);
           scanf("%d",&A[i][j]);  
        }
    }
    printf("\n");
    return A;
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
void affiche(int **S,int n){
    int i,j;
    printf("La somme de deux matrices est :\n");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%d",S[i] [j]);
        }
        printf(" \n");
    }
    
}