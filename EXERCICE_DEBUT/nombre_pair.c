/*ALGORITHME
Début
 n type entier
 Ecrire ("entrer n:")
 Lire (n)
 Si n mod 2 = 0 Alors
    Ecrire ("pair")
 Sinon
    Ecrire ("impair")
Finsi
i,compteur type entier
compteur=0
pour i de 1 à n faire
    si n pair  alors
        compteur=compteur+1
        i= i+1

    fin si
Fin pour
Afficher ("le nombre de nombre pair est:",compteur)
Fin
*/
/*Afficher les 100 premiers nombres pairs  
si n est pair alors afficher n
 */
#include <stdio.h>
#include <math.h>
char parite(int n){
    if (n%2==0){
        return 'p'; // pair
    }
    else{
        return 'i'; // impair
    }
}
void affiche_pair(int m){
    int compteur=0, i=0;
    while(compteur < m){
        if (parite(i) == 'p'){
            printf("%d ", i);
            compteur++;
        }
        i++;
    }
}
int main(){
    int n;
    printf("entrer n: ");
    scanf("%d",&n);
    if (parite(n)== 'p'){
        printf("%d est pair \n",n);
    }
    else{
        printf("%d est impair \n",n);
}
int m=100;
affiche_pair(m);
}
