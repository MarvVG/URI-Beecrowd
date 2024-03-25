#include<stdio.h>
#include<stdlib.h>

int main()
{
    int j,i,k,n,nn,palavra[100];
    char c[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        palavra[i]=0;
        scanf("%d",&nn);
        for(j=0;j<nn;j++){
            scanf("%s",c);
            for(k=0;c[k]!='\0';k++){
                palavra[i]=c[k]-65+j+k+palavra[i];
    }
    }
    printf("%d\n",palavra[i]);
    }
}
