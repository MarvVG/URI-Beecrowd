#include <stdlib.h>
#include <stdio.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    for(i=1; i<X; i++)
    {
        if(X%i==0)
            printf("%d\n",i);



    }
    printf("%d\n",X);
}
