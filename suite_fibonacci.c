/* Algo qui calcul la suite de fibonacci
DEBUT
   n,f[0],f[1],i type entier
   Ecrire (entrer n)
   Lire(n),f[n] type entier
   f[n]= f[n-1]+f[n-2]
   f[0]=0
   f[1]=1
   pour i=2,i<n,i++
   f[n]=f[1]+f[0]
   f[0]=f[1]
   f[1]=f[n]
   afficher f[n]
   */
   #include <stdio.h>
   int main(){
    int n;
    int f[n+1];
    int i;
    printf("Entrer n: ");
    scanf("%d",&n);
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++){
    f[i]=f[i-1]+f[i-2];
   }
   printf("f[%d] est donc %d",n,f[n]);
   return 0;
}
    