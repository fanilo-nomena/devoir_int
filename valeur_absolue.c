/* ALGO POUR CALCULER LA VALEUR ABSOLUE D UN NOMBRE
DEBUT
   Ecrire (Entrer x)
   Lire(x)
   si x superieur ou egal a zero alors valeur_absolue=x
   sinon valeur absolue =-x
FIN*/
#include <stdio.h>
int main(){
    int x;
    printf("Entrer x:");
    scanf("%d",&x);
    int val;
    if(x>=0){
        val= x;
    }
    else val= -x;
    printf("La valeur absolue de x est %d",val);
    return 0;
}