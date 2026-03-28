#include <stdio.h>
#include <string.h>
int longueurChaine(const char* chaine);
int main(){
     char chaine[] = "Salut";
     int longueur = 0;
     longueur = longueurChaine(chaine);
     printf("La chaine %s fait %d caracteres de long", chaine,longueur);
 return 0;
}
 int longueurChaine(const char* chaine)
{
 int compteur = 0;
 char caractereActuel = 0;
 do
 {
   caractereActuel = chaine[compteur];
   compteur++;
 }
 while(caractereActuel != '\0'); // On boucle tant qu'on n'est pas arrivé à l'\0'

 compteur--; // On retire 1 caractère de long pour ne pas compter le caractère \0
  return compteur;
 }
