#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

while(scanf("%d", &n) != EOF){
     int *v;
    int menor;
    int i,j,aux;
    v = malloc(n*sizeof(int));
for(int x=0;x<n;x++){
    scanf("%d",&v[x]);
}
    for(j=0;j<n;j++){
        menor=j;
        for (int i = j + 1; i < n; i++) {
		    if (v[i] < v[menor]){
			    menor = i;
		        }
	}
	aux = v[j];
	v[j] = v[menor];
	v[menor] = aux;
    }
    for(i=0;i<n;i++){
        printf("%04d\n",v[i]);
    }
    }
system("pause");
    return 0;
}
