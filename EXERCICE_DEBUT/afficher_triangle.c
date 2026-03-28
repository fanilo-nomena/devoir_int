/*ALGORITHME POUR ENTRER UN NOMBRE ET AFFICHER UN TRIANGLE DE ETOILES 
DEBUT
 creer une fonction
 n,i,j type entier
 pour (i=1;i<=n;i=i+1)
 pour (j=1;j<=i;j=j+1)
 afficher "*"
 afficher une nouvelle ligne
 Appeler la fonction dans int main
FIN

*/
#include <stdio.h>
void afficherTriangle(int n) {
    int i, j;
    printf("Entrer le nombre de lignes: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    afficherTriangle(n);
    return 0;
}