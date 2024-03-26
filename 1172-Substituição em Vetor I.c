#include <stdio.h>

int main(){
    int N[10];
    for(int i=0;i<10;i++)
    scanf("%d",&N[i]);
for(int i=0;i<10;i++){
    if(N[i]==0 || N[i]<0) N[i]=1;
    printf("X[%d] = %d\n",i,N[i]);
}
}
