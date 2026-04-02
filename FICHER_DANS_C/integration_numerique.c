#include <stdio.h>
#include <math.h>
#include "integration_numerique.h"

double f(double x){
    return sin(x);
}

int nb_subdivision(){
    int N;
    printf(" entrer le nombre de subdivisions =");
    scanf("%d",&N);
    printf("\n");
    return N;
}

float borne (char nom){

    float m;
    printf(" entrer la borne %c= ",nom);
    scanf(" %f",&m);
    return m;
}

float largeur(float a,float b, int N){
float h;
h= (b-a)/N;
return h;
}

float noeud(float a,float h, int N){
    int i;
    for (i=1;i<=N;i++){
        float xi= a + i*h;
        
    }
    return a + i*h;
}

// METHODE DE RECTANGLE A GAUCHE
double rectangle_gauche(float a,float h, int N){
    double somme=0;
    int i;
    double G=0;
    for (i=1;i<N;i++){
        float xi= a+ i * h;
        somme += f(a + (i-1) * h);
        G= h*somme;
    }
    return G;
    
      }

// METHODE DE RECTANGLE A DROITE
double rectangle_droite(float a,float h, int N){
    double somme=0;
    int i;
    double D=0;
    for (i=1;i<N;i++){
        float xi= a+ i * h;
        somme += f(a + i * h);
        D= h*somme;
    }
    return D;
    
      }
    
// METHODE DE MILIEU
double milieu(float a, float h, int N){
    int i;
    double somme =0;
    double M=0;
    for (i=1;i<N;i++){
        float xi=  a+ i*h;
        float yi= a+((i-1) * h);
        float zi= (xi + yi)/2 ;
        somme += f(zi); 
        M= h * somme ;
    }
    return M;
}

// METHODE DE TRAPEZE
double trapeze(float a,float b, float h, int N){
    int i;
    double somme= 0;
    double T;
    for (i=1;i<N-1;i++){
        float xi= a + i*h;
        somme += f(xi);
    }
    T= (h/2) * (f(a)+f(b)+(2*somme));
    return T;
}

// METHODE DE SIMPSON
double simpson (float a, float b, float h, int N){
    int i;
    double somme1= 0;
    double somme2= 0;
    double S= 0;
    for (i=1;i<N-1;i++){
        float xi= a + i*h;
        float yi= a + ((i+1) * h);
        somme1 += f((xi + yi)/2);
        somme2 += f(xi);
    }
    S= (h/6) * (f(a)+f(b)+(2 * somme2)+(4 * somme1));
    return S;
    
}
