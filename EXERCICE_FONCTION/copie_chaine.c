#include <stdio.h>
#include <string.h>
char* strcpy(char* copie, const char* original);
void affiche(char* copie);
int main(){
  char original[100]= "I am beautiful";
  char copie[100];
  printf("la chaine original est:%s\n",original);
  strcpy(copie,original);
  
  affiche(copie);
  return 0;

}
char * strcpy(char* copie, const char* original){
    int i;
    for (i=0; original[i] != '\0'; i++){
        copie[i] = original[i];
    }
    copie[i] = '\0'; // Ajouter le caractère de fin de chaîne
    return copie;
}
void affiche(char* copie){
    printf("la chaine copié est:%s\n",copie);
}
