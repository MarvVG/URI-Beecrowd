#include <stdio.h>
#include <stdlib.h>

int main()
{
double n,aux;
scanf("%lf",&n);
if(n<=2000)printf("Isento\n");
if(n>2000 && n<=3000){
    n=n-2000;
    n=n*8/100;
    printf("R$ %.2lf\n",n);
}
if(n>3000 && n<=4500){
    n=n-3000;
    aux=1000*8/100;
    n=n*18/100+aux;
    printf("R$ %.2lf\n",n);
}
if(n>4500){
    n=n-4500;
    aux=1000*8/100;
    aux=aux+(1500*18)/100;
    n=n*28/100+aux;
    printf("R$ %.2lf\n",n);
}
}
