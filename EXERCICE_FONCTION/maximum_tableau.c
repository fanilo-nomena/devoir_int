/*Créez une fonction maximumTableau qui aura pour rôle de remettre à 0 toutes les
cases du tableau ayant une valeur supérieure à un maximum. Cette fonction prendra
en paramètres le tableau ainsi que le nombre maximum autorisé (valeurMax). Toutes
les cases qui contiennent un nombre supérieur à valeurMax doivent être mises à 0*/
#include <stdio.h>
int taille();
void remplir(int t[],int n);
int maximumTableau(int t[], int n,int m);
void affiche (int t[], int n);
int main(){
    int n;
    n=taille();
    int t[n];
    remplir(t,n);
    int l;
    l=100;
    int nbmodif;
    nbmodif=maximumTableau(t,n,l);
    printf("le nombre de cases mises à 0 est: %d\n",nbmodif);
    printf("le contenu du tableau est: ");
    affiche(t,n);
    return 0;

}
int taille(){
    int n;
    printf("entrer la longueur du tableau:");
    scanf("%d",&n);
    return n;
}

void remplir(int t[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("entrer t[%d]:",i);
        scanf("%d",&t[i]);
    }
}

int maximumTableau(int t[], int n, int max){
    int i;
    int compteur=0;
    for(i=0;i<n;i++){
    if (t[i]>max){
        t[i]=0;
        compteur++;
    }
   }
   return compteur;
}

void affiche (int t[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",t[i]);
    }
}
   