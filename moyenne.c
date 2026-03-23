/* ALGO POUR CALCULER LA MOYENNE DES TABLEAU
DEBUT
   Ecrire (Entrer n)
   Lire(n)
   tab[n] type entier
   pour i=0,i inferieur à n, i=i+1
   Ecrire(entrer les valeurs dans tab[i])
   lire(tab[i])
   somme type entier
   pouri=0,i inferieur à n, i=i+1
   somme =sum(tab[i])
   lire somme
   moyenne type float
   moyenne= somme /n
   lire moyenne
FIN */
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Entrer n:");
    scanf("%d",&n);
    int tab[n];
    int i;
    for(i=0;i<n;i++){
        printf("entrer tab[%d]=",i);
        scanf("%d",&tab[i]);

    }
    int somme;
    somme=0;
    for(i=0;i<n;i++){ 
        somme+= tab[i];   
    }
    
    printf("somme=%d\n",somme);
    float moyenne;
    moyenne=(float)somme/n;
    printf("La moyenne est : %f",moyenne);
    
}