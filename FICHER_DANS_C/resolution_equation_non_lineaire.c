#include <stdio.h>
#include <math.h>
#include "resolution_equation_non_lineaire.h"
// Definition de la fonction f(x)
float f(float x){
    return x-cos(x);
}

// Sa dérivée première
float derive_premier(float x){
    return 1+sin(x);
}

// Sa dérivée seconde
float derive_second(float x){
    return cos(x);
}

// Definition des bornes
float borne(char nom){
    float m;
    printf(" entrer la borne %c= ",nom);
    scanf(" %f",&m);
    printf("\n");
    return m;
}

// Definition du nombre maximum d'itérations
int taille(){
    int n;
    printf(" entrer le nombre max d'iteration=");
    scanf("%d",&n);
    printf("\n");
    return n;
}

// METHODE DE NEWTON
float newton(float x0, int n, float eps){
   float xn= x0;
   int i;
    for( i = 0; i < n; i++){
        float xn1 = xn - f(xn)/derive_premier(xn);
        if(fabs(xn1 - xn) < eps)
            return xn1;
        xn = xn1;
    }
    return xn;
}

// METHODE DE DESCARTES
    float descartes(float v0,float v1, int n,float eps){

        float vn=v0;
        float vn1=v1;
        int i;
        for ( i = 0; i < n; i++){
            float denom = f(vn1) - f(vn);
        if (denom == 0)
            return vn1;
            float vn2= vn1 - (f(vn1) *((vn1 - vn)/denom));
            if(fabs(vn2 - vn1) < eps)
                return vn2;
            vn = vn1;
            vn1 = vn2;

        }
        return vn1;
    }

    // METHODE DE DICHOTOMIE
    float dichotomie(float a, float b,int n,float eps){
        int i;
        float c;
        if (f(a) * f(b) >= 0){
            printf("On a une erreur car f(a) et f(b) doivent avoir de signes opposés");
            return 0;
        }
        for (i = 0; i < n; i++){
           c = (a + b)/2;
          if (fabs(f(c)) < eps || fabs(b - a) < eps)
            return c;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    return c;  
}

// METHODE DE POINT FIXE
float point_fixe(float w0,int n,float eps){
    float wn= w0;
    float wn1;
    int i;

    for (i = 0; i < n; i++){
        wn1 = f(wn);
        if (fabs(wn1 - wn) < eps)
            return wn1;
        wn = wn1;

    }
    return wn1;

}


