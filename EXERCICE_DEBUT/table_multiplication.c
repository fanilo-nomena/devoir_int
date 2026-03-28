/*ALORITME QUI AFFICHE LA TABLE DE MULTIPLICATION DE n dans une fonction modulaire
DEBUT
  Créer une fonction multilpication qui affiche une table
  i type entier
  n type entier
  Ecrire("entrer n")
  Lire n
  pour (i=0,i<10,i=i+1)
  afficher (8*i)
  appeler la fonction dans int main
FIn*/
#include <stdio.h>
void multiplication(){
    int i;
    int n;
    printf("Entrer la table :");
    scanf("%d",&n);
    for(i=0;i<=10;i++){
        printf("%d*%d=%d\n",n,i,i*n);
    }
}
int main(){
    multiplication();
    return 0;
}