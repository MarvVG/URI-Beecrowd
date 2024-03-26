#include <stdio.h>
#include <stdlib.h>

struct valor {
    int valor,resto,div;
};

int compare( void *t1,  void *t2)
{
     struct valor *n1 = ( struct valor *) t1;
     struct valor *n2 = ( struct valor *) t2;

    if (n1->resto == n2->resto) {
        if (n1->div && n2->div)
            return n2->valor - n1->valor;

        if (!n1->div && !n2->div)
            return n1->valor - n2->valor;

        if (n1->div)
            return -1;
        return 1;
    }
    return n1->resto - n2->resto;
}

int main()
{
    while (1) {
        int N, M, i;
        struct valor vet[10000];

        scanf("%d%d", &N, &M);
        if (!N && !M)
            break;

        for (i = 0; i < N; ++i) {
            scanf("%d", &vet[i].valor);
            vet[i].resto = vet[i].valor % M;
            vet[i].div = vet[i].valor % 2;
        }

        qsort(vet, N, sizeof(struct valor), compare);

        printf("%d %d\n", N, M);
        for (i = 0; i < N; ++i)
            printf("%d\n", vet[i].valor);
    }
    puts("0 0");

    return 0;
}
