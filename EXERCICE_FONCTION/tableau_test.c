#include <stdio.h>
int entreeTaille();
void creationTableau(int t[],int n);
int sommetableau(int t[],int n);
void affiche(int p);
int main(){
    int n,i,t[n],m;
     n=entreeTaille();
     creationTableau(t,n);  
     m= sommetableau(t,n);
     affiche(m);
     return 0;
     }

int  entreeTaille(){
    int n;
    printf("entrer la longueur du tableau:");
    scanf("%d",&n);
    return n;
}
void creationTableau(int t[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("entrer tab[%d]:",i);
        scanf("%d",&t[i]);   
    }
}
int sommetableau(int t[],int n){
    int i,s=0;
    for (i=0;i<n;i++){
        s=s+t[i];
    }
    return s;
}
void affiche (int p){
    printf("la somme  des valeurs dans le tableau est %d",p);
}

