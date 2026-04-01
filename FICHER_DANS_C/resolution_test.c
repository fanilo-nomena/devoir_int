#include <stdio.h>
#include <math.h>
#include "resolution_equation_non_lineaire.h"

int main(){
    float a,b;
   a= borne('a');
   b= borne ('b');

   int n = taille();

   float x0;
   // METHODE DE NEWTON
   if ((derive_second(a) * f(a)) > 0){
      x0= a;
   }
   else x0= b;
   float xn,xn1;
   float eps= 0.0001; 
   float N= newton(x0, n, eps);
   printf("la racine de l'equation f(x)=0 par la methode de Newton est : %f\n",N);

   // METHODE DE DESCARTES
   float v0,v1,vn,vn1,vn2;
   if ((derive_second(a) * f(a)) > 0){
      v0= b;
      v1= a;
   }
   else{
      v0= a;
      v1= b;
   }
    float D= descartes(v0,v1, n, eps);
    printf("la racine de l'equation f(x)=0 par la methode de Descartes est : %f\n",D);

    // METHODE DE DICHOTOMIE
    float dich= dichotomie(a,b,n,eps);
    printf("la racine de l'equation f(x)=0 par la methode de Dichotomie est : %f\n",dich);

    // METHODE DE POINT FIXE
    float P= point_fixe(x0,n,eps);
    printf("la racine de l'equation f(x)=0 par la methode de Point Fixe est : %f\n",P);

return 0;
}
