#include <stdio.h>
#include <stdbool.h>
int entrer();
bool pair(int a);
void affiche(int p);

int main(){
    int m;
    m= entrer();
    if (pair(m)){
        printf("%d est pair\n",m);
    }
    else {
        printf("%d est impair\n",m);
    }
    affiche(10);
}
int entrer(){
    int n;
    printf("entrer la variable:");
    scanf("%d",&n);
    return n;
}

bool pair(int a){
    if (a%2==0)
    return true;
else return false;
}
 void affiche(int p){
    int compteur= 0,a=0;
    while (compteur<p){
        if (pair(a)==true) {
            printf("%d ",a);
            compteur++;
        }
        a++;
    }
}
