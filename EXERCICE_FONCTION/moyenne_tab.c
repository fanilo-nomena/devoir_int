/*Créez une fonction moyenneTableau qui calcule et renvoie la moyenne des valeurs*/
#include <stdio.h>
int longueurt();
void remplirt(int t[],int n);
int moyennet(int t[], int n);
void affiche(int p);

int main(){
    int n,m;
    n= longueurt();
    int t[n];
    remplirt(t,n);
    m= moyennet(t,n);
    affiche(m);
return 0;

}

int longueurt(){
    int n;
    printf("Entrer la longueur du tableau:");
    scanf("%d",&n);
    return n;
}

void remplirt(int t[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("entrer t[%d]: ",i);
        scanf("%d",&t[i]);
    }  
}

int moyennet(int t[], int n){
    int s=0,i=0;
   for (i=0;i<n;i++){
    s +=t[i];
   }
   return s/n;
}

void affiche(int p){
    printf("la moyenne du tableau est: %d",p);
}