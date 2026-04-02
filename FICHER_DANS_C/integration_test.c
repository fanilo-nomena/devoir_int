#include <stdio.h>
#include <math.h>
#include "integration_numerique.h"

int main(){
    int N;
    N= nb_subdivision();
    float a,b;
    a= borne('a');
    b= borne('b');
    float h= largeur(a,b,N);
    printf("h= %f",h);
    printf("\n");
    float xi= noeud(a,h,N);
    printf("xi= %f",xi);
    printf("\n");
    double R1= rectangle_gauche(a,h,N);
    printf("l'estimation de l'integrale par la methode des rectangle a gauche est: %lf\n",R1);
    double R2= rectangle_droite(a,h,N);
    printf("l'estimation de l'integrale par la methode des rectangle a droite est: %lf\n",R2);
    double Milieu = milieu (a,h,N);
    printf("l'estimation de l'integrale par la methode du milieu est: %lf\n",Milieu);
    double Trapeze = trapeze(a,b,h,N);
    printf("l'estimation de l'integrale par la methode du Trapeze est: %lf\n",Trapeze);
    double Simpson = simpson(a,b,h,N);
    printf("l'estimation de l'integrale par la methode du Simpson est: %lf\n",Simpson);
    double x[N],y[N],X;
    return 0;
}