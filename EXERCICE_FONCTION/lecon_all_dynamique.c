#include<stdio.h>
int main(){
    //Connaitre le memoire occupé par le type de variable
    printf("le memoire occupé par le type entier est %d\n",sizeof(int));
    printf("le memoire occupé par le type float est %d\n",sizeof(float)); 
    printf("le memoire occupé par le type char  est %d\n",sizeof(char));
    printf("le memoire occupé par le type long est %d\n",sizeof(long));
    printf("le memoire occupé par le type double est %d\n",sizeof(double));
    return 0;
}