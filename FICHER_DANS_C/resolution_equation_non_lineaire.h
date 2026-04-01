// Separation de racine ie chercher x tel que f(x)= 0
// f(x)= x-cos x ,x appartient à la 'intervalle[-1/2,2]
float f(float x);
float derive_premier(float x);
float derive_second(float x);
int taille();
float borne(char nom);
float newton(float x0, int n, float eps);
float descartes(float v0,float v1, int n,float eps);
float dichotomie(float a, float b,int n,float eps);
float point_fixe(float w0,int n,float eps);