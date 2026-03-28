#include <stdio.h>

int main()
{
    int n,i,U0,U1,U2,Un;
    n=30;
    U0=3;
    U1=-4;
    Un = (2*U1)+(3*U0);

    for (i=2;i<=n;i++){
        // Afficher les 30 premiers termes
        Un= (2*U1)+(3*U0);
        printf("U%d=%d\n",i,Un);
        U0=U1;
        U1=Un;
    }
        // Calcul de la somme 
        int somme;
        somme= 0;
        somme += Un;
        printf("la somme des 30 premier termes est: %d",somme);
    
    return 0;

}