#include <stdio.h>

int main()
{
    int frango1,bife1,massa1,frango2,bife2,massa2,falta=0;
    scanf("%d%d%d",&frango1,&bife1,&massa1);
    scanf("%d%d%d",&frango2,&bife2,&massa2);
    if(frango1<frango2)
        falta = (frango2-frango1)+falta;
    if(bife1<bife2)
        falta = (bife2-bife1)+falta;
    if(massa1<massa2)
        falta = (massa2-massa1)+falta;
    printf("%d\n",falta);
}
