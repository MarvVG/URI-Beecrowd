#include <stdio.h>

int main(void){
    int n,menor,aux;
    scanf("%d",&n);
    int x[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&x[i]);
    }
    menor = x[0];
    for(int i=0;i < n; i++){
        if(x[i]<menor){
            menor = x[i];
            aux = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",menor,aux);
}
