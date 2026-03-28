#include <stdio.h>
#include <stdlib.h>
int taille(char nom);
int **remplir(int n,char nom);
int calcul_det(int **A, int n);
int main(){
    int n,**X;
    int det;
    n= taille('X');
    X= remplir(n,'X');
    det=calcul_det(X,n);
    printf("le determinant est %d",det);


}
int taille(char nom){
    int n;
    printf("entrer la dimension du matrice %c:",nom);
    scanf("%d",&n);
    return n;
}
int **remplir(int n,char nom){
    int i,j;
    int **A= malloc(n * sizeof(int *));
    for (i=0;i<n;i++){
        A[i]= malloc(n * sizeof(int));
       for (j=0;j<n;j++){
        printf("entrer la valeur de %c[%d][%d]:",nom,i,j);
        scanf("%d",&A[i][j]);
       }
    }
    return A;
}
int calcul_det(int **A, int n){
    if (n!=2){
        printf("le determinant n'est pas calculable pour une matrice de dimension %d",n);
        return 0;
    }
    int det;
     det = (A[0][0] * A[1][1]) - (A[1][0] * A[0][1]);
    return det;
       
}