/*ALGORITHME
DEBUT
caractere type chaine de caractere
longueur type entier
longueur= sizeof(caractere)/sizeof(caractere[0])
afficher longueur
*/
#include <stdio.h>
int main(){
char caractere[]="hello everyone , je suis une étudiante en innovation et technologie";
int longueur;
longueur= sizeof(caractere)/sizeof(caractere[0]);
printf("La longueur de notre chaine de caractère est:%d",longueur);
return 0;
}

