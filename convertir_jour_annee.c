/* ALGORITHME QUI CONVERTI LES JOURS SPECIFIE EN ANNEE,SEMAINE ET JOURS SANS TENIR COMPTE LES ANNEE BISSEXTILE
DEBUT
  Creer une fonction conversion
  n est du type entier
  Ecrire ("entrer le nombre du Jour :")
  Lire(n)
  Creer une fonction annee
  annee type entier
  annee= n/365;
  Creer une fonction semaine
  semaine type entier 
  semaine= (n/365)/7
  creer une fonction Jours
  jours type entier
  calculer les jours restant
  jours= n-((an*365)+(semaine*7))
  dans int main fait:
  afficher annee
  afficher semaine
  afficher Jours
FIN
*/
#include <stdio.h>
int conversion(){
    int n,a,s,j;
    printf("Entrer les jours à Convertir:");
    scanf("%d",&n);
    a = n / 365;
    s = (n % 365) / 7;
    j = (n % 365) % 7;

    printf("%d ans\n",a);
    printf("%d semaines\n",s);
    printf("%d jours\n",j);
 
}
int main(){
    int a,s,j;
    conversion();
    return 0;
}
