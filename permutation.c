/* ALGO DE PERMUTATION DE DEUX ENTIERS
DEBUT
    a,b type entier
    Entrer(a)
    lire(a)
    entrer(b)
    lire(b)
    c=a
    a=b
    b=c
FIn
    */
    #include <stdio.h>
    int main(){
        int a,b,c;
        printf("Entrer a: ");
        scanf("%d",&a);
        printf("Entrer b: ");
        scanf("%d",&b);
        c=a;
        a=b;
        b=c;
        printf("d'apres permutation on a \n a=%d\n",a);
        printf("b =%d",b);
        
        return 0;


    }