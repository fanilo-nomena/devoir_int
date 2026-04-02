// estimer la valeur de l'integrale sur [a,b] de f(x)

double f(double x);
int nb_subdivision();
float borne (char nom);
float largeur(float a,float b, int N);
float noeud(float a,float h, int N);
double rectangle_gauche(float a,float h, int N);
double rectangle_droite(float a,float h, int N);
double milieu(float a, float h, int N);
double trapeze(float a,float b, float h, int N);
double simpson (float a, float b, float h, int n);

