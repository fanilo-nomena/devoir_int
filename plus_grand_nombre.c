/*ALOGORTHME
Début
   n , i, tab[i] type entier
   Ecrire ("Entrer n")
   Lire(n)
   pour (i=0; i<=n, i=i+1)
   ecrire("entrer tab[i]=")
   Lire (tab[i])
   Fin pour
   max type entier
   max= 0
   pour (i=0,i<n,i=i+1)
   si max <i, alors max= i
   afficher (max)
Fin*/
#include <stdio.h>
int main(){
    int n;
    printf("Entrer la longueur de tableau: ");
    scanf("%d",&n);
    printf("\n: ");
    // Creation du tableau
    int i, tab[n];
    //Remplissage du tableau
    for(i=0;i<n; i++){
        printf("entrer tab[%d]:",i);
        scanf("%d",&tab[i]);
    }
    // Trouver le maximum
    int max=tab[0];

    for(i=0;i<n; i++)
        if (tab[i]>max){
            max=tab[i];
        }

    
    printf("le maximum est: %d", max);
   
    return 0;
}
