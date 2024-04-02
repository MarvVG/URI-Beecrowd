#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int  quantidade;
    double cod1=4.00,cod2 =4.50,cod3=5.00,cod4=2.00,cod5=1.50,total=0,codigo;
    scanf("%lf%d",&codigo,&quantidade);
    if (codigo==1)
        (codigo=cod1);
    else if (codigo==2)
        codigo=cod2;
    else if (codigo==3)
        codigo=cod3;
    else if (codigo==4)
        codigo=cod4;
    else
        codigo=cod5;
    total=quantidade*codigo;
    printf("Total: R$ %.2lf\n",total);


}
