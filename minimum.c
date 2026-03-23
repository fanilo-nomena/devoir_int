/*ALGO POUR TROUVER LE MINIMUM DANS UN TABLEAU
DEBUT
   n,tab[n],i type entier
   Ecrire( entrer n)
   Lire(n)
   pour i=0,i<n,i=i+1
   Ecrire( entrer la valeur du tableau)
   Lire le tableau
   min est du type entier
   initier min par tab[0]
   pour i=0,i<n,i=i+1
   si tab[i]<tab[0] alors min= tab[i]
   afficher le minimum

  */
  #include <stdio.h>
  int main(){
    int n;
    printf("Entrer la longueur du tableau: ");
    scanf("%d",&n);
    int tab[n];
    int i;
    for(i=0;i<n;i++){
     printf("entrer la valeur de tab[%d]: ",i);
      scanf("%d",&tab[i]);
    }
    int min=tab[0];
    for(i=0;i<n;i++){
      if (tab[i]<tab[0]){
        min = tab[i];
      } 
}
  printf("Le minimum est : %d\n",min);
  }  