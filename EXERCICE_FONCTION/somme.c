#include <stdio.h>
// Programme qui calcul la somme de deux entiers
//fonction qui fait entrer les valeurs
int entrer(){
    int a;
    printf("entrer:");
    scanf("%d",&a);
    return a;
}
int somme (int a, int b){
    return a+b;
}
void affiche(int p){
    printf("la somme est %d",p);
}
int main(){
    int m,n,r;
    m= entrer(1);
    n= entrer(2);
    r= somme(m,n);
    affiche(r);
    return 0;
}
