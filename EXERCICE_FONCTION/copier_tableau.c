/* une fonction copierTableau qui prend en paramètre deux tableaux. Le contenu
du premier tableau devra être copié dans le second tableau*/
#include <stdio.h>
int taille();
void remplir(int t[],int n);
void copierTableau(int t1[], int t2[], int n);
void affiche(int t[], int n);
int main(){
    int n;
    n=taille();
    int t1[n],t2[n];
    remplir(t1,n);
    copierTableau(t1,t2,n);
    printf("le contenu du second tableau est: ");
    affiche(t2,n);
    return 0;
}
int taille(){
    int n;
    printf("entrer la taille du tableau:");
    scanf("%d",&n);
    return n;
}

void remplir(int t[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("entrer la valeur de tab[%d]",i);
        scanf("%d",&t[i]);
    }
}

void copierTableau(int t1[], int t2[], int n){
    int i;
    for (i=0;i<n;i++){
        t2[i]=t1[i];
    }
}

void affiche(int t[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d ",t[i]);
    }
}
