/* Créez une fonction ordonnerTableau qui classe les valeurs
d'un tableau dans l'ordre croissant. Ainsi, un tableau qui vaut {15, 81, 22, 13} doit
à la n de la fonction valoir {13, 15, 22, 81}*/
#include <stdio.h>
int taille();
void remplir(int t[],int n);
void ordonerTableau(int t[],int n);
void affiche(int t[], int n);
int main(){
    int n;
    n= taille();
    int t[n];
    remplir(t,n);
    ordonerTableau(t,n);
    affiche(t,n);
    return 0;

}
int taille(){
    int n;
    printf("entrer la longueur du tableau:");
    scanf("%d",&n);
    return n;
}

void remplir(int t[],int n){
    int i;
    for (i=0;i<n;i++){
        printf("entrer la valeur de t[%d]=",i);
        scanf("%d",&t[i]);
    }
}

void ordonerTableau(int t[],int n){
    int i,j;
    for (i=0;i<n-1;i++){
        for (j=0;j<n-i-1;j++){
            if ( t[j]>t[j+1]){
                //on les echange
                int temp= t[j];
                t[j]=t[j+1];
                t[j+1]=temp;

            }
        }
    }
}

void affiche(int t[], int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d ",t[i]);
    }
    
}
