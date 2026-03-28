#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void debut();
int  nombre_de_coup(int n);
int main(){
    debut();
    int n;
    nombre_de_coup(10);
return 0;
}
void debut(){
    printf("BIENVENUE DANS LE PENDUE!\n");
    printf("\n");   
}
int  nombre_de_coup(int n){
    printf("Vous avez %d coups a jouer",n);
    scanf("%d",&n);
    return n;
}
char mot_secret(){
    char mot_secret= "BANANE"
}

