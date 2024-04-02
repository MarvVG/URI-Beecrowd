#include <stdio.h>

int main()
{
    int a=1,i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("%d %d %d\n",a,a*a,a*a*a);
        a++;
    }
    return 0;
}
