/*ALGORITHME
DEBUT
   n type entier
   factorielle type long long
   Ecrire("Entrer n")
   Lire(n)
   si n=0 alors retourner 1
   sinon alors fait n*factorielle(n-1)
FIN*/
#include <stdio.h>
long long factorielle(int n){
    if (n==0){
        return 1;
    }
    else {
        return n*factorielle(n-1);
    }
}
int main(){
    int n;
    printf("Calculer la fatorielle de :");
    scanf("%d",&n);
    printf(" la factorielle de %d = %lld",n,factorielle(n));
    return 0;
}