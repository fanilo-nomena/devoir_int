#include <stdio.h>
int main(){
int age=10;// creer une variable de type int dont la valeur est 1à
int *pointeursurAge= &age; // Créer une variable de type pointeur dont la valeur vaut
//l'adresse de la variable age
printf("%d",*pointeursurAge);
}