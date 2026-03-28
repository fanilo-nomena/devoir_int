#include <stdio.h>

int main()
{
    int n,i,U0,U1,U2,Un;
    n=70;
    U0=3;
    U1=-4;
    Un = (2*U1)+(3*U0);

    for (i=2;i<=n;i++){
        // Afficher la 70 eme termes);
        Un = (2*U1)+(3*U0);
        U0=U1;
        U1=Un;
    }
        printf("La 70 eme termes est :%d",Un);
    
    return 0;

}