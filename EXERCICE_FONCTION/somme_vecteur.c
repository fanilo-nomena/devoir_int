#include <stdio.h>
#include <stdlib.h>
int taille();00
int *valeur(int n, char nom);
int *calcul(int n,int *X, int *Y);
void affiche(int n, int *C);
int main(){
    int n;
    n= taille();
    int *X,*Y,*C;
    X= valeur(n,'X');
    Y= valeur(n,'Y');
    C= calcul(n,X,Y);
    affiche(n, C);
// toujours liberer la memoire apres un malloc
    free(X);
    free(Y);
    free(C);
    return 0;
}
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

int *calcul(int n,int *X, int *Y){
    int i;
    int *C= malloc(n*sizeof(int));
    for (i=0;i<n;i++){
           C[i]= X[i]+ Y[i];
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