/*ALGORITHME QUI VERIFIE DEUX ENTIERS DONNEES ET RENVOIE TRUE SI AU MOINS UN DES DEX EST EGAL A 20 OU SI
LEUR SOMME EST EGAL A 20
DEBUT
  Creer une fonction verification
  Ecrire ("entrer la premiere entier")
  lire(a)
  Ecrire ('entrer la deuxieme entier)
  lire(b)
  si (a==20 ou a==20 ou a+b=20) alors TRue
  fin si
FIn*/
#include <stdio.h>
#include <stdbool.h>
bool verification(){
    int a,b,c;
    printf("Entrer la premiere entier: ");
    scanf("%d",&a);
    printf("Entrer le second entier: ");
    scanf("%d",&b);
    c=a+b;
    printf("la valeur de c est: %d\n",c);
    if(a==20 || b==20 || c==20){
        return true;
    }
    
        return false;
}
int main(){
    bool result = verification();

    printf("%s\n", result ? "true" : "false");

    return 0;
}