/* ALGORITHME : nombre_premier
//verifier d'abord si le nombre est premier ou pas
//DEBUT
  //n,i,premier type entier
  //Ecrire(n)
  //Lire(n)
  //pour i de 2 à n faire
  //    si n mod i = 0 alors premier= faux
  //    
  //Fin si
  //Fin pour
//FIN

//Afficher maintenant les 25 nombre premier
//DEBUT
  //compteur=0
  //a=2
  //tant que compteur < 25 faire
  //    si a est premier alors
  //        afficher(a)
  //        compteur=compteur+1
  //    fin si
  //    a=a+1
  //Fin tant que
//FIN

*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// is_premier return true si n est un nombre premier autrement return false
bool is_premier(int n){
    
    int i;

    if (n==1){
        return false;
    }
    if (n==2){
        return true;
    }
    
    for (i=2;i<n;i++){
        if (n%i== 0){
            return false;
        }
    }
    return true; 
}

// Afficher les n premiers nombres premiers
void affiche_premier(int m){
    int compteur = 0, i = 2;

    while (compteur < m){
        if (is_premier(i) == true){
            printf("%d ", i);
            compteur++;
        }
        i++;
    }
}

int main(){

    int n = 39;

    if(is_premier(n)){
        printf("%d est premier\n",n);
    }

    else{
        printf("%d n'est pas premier\n  ",n);
    }

    int m = 25;
    affiche_premier(m);

}