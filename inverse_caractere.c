/*ALGORITHME
Début
  car[] type chaine de caractère
  entrer car[]
  afficher la longueur de la chaine
  inverser la chaine*/

  #include <stdio.h>
#include <string.h>

int main(){
    char car[] = "Madagascar";
    int longueur = strlen(car);

    printf("la longueur de la chaine est: %d\n", longueur);

    char inverse[longueur + 1];
    int i;

    for(i = 0; i < longueur; i++){
        inverse[i] = car[longueur - 1 - i];
    }

    inverse[longueur] = '\0';

    printf("la chaine inversée est: %s\n", inverse);

    return 0;
}
    
  
    