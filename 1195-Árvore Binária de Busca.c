#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int tipo;
typedef struct No{	struct No *esq;
					int valor;
					struct No *dir;
				}Arv;
int ImprimirArvore(Arv *r)
{
	if(r != NULL)
	{
		if(tipo == 1){
			printf(" %d", r->valor);
			ImprimirArvore(r->esq);
			ImprimirArvore(r->dir);
		}
		if(tipo == 2){
			ImprimirArvore(r->esq);
			printf(" %d", r->valor);
			ImprimirArvore(r->dir);
		}
		if(tipo == 3){
			ImprimirArvore(r->esq);
			ImprimirArvore(r->dir);
			printf(" %d", r->valor);
		}
	}

	return 0;
}
Arv * Raizmain(Arv *r, int v)
{	if(r == NULL)
	/* Arvore vazia */
		return NULL;
	else
		if(v <= r->valor)
		/* Novo noh deve ficar a esquerda de r */
			if(r->esq == NULL)
				return r;
			else
				return Raizmain(r->esq, v);
		else
		/* Novo noh deve ficar a direita de r */
			if(r->dir == NULL)
				return r;
			else
				return Raizmain(r->dir, v);
}
int main()
{ Arv *raiz, *t, *aux;
	int Tam, Ncasos, c, d, noh;

	raiz = NULL;
	scanf("%d", &Ncasos);

	for(c=1; c<=Ncasos; c++)
	{
		raiz = NULL;

		scanf("%d", &Tam);
		for(d=0; d<Tam; d++)
		{
			scanf("%d", &noh);

			aux = (Arv *) malloc(sizeof(Arv));
			aux->valor = noh;
			aux->esq = NULL;
			aux->dir = NULL;

			t = Raizmain(raiz, noh);
			if(t == NULL)
				raiz = aux;
			else
				if(noh <= t->valor)
					t->esq = aux;
				else
					t->dir = aux;
		}

		printf("Case %d:", c);

		printf("\nPre.:");
		tipo = 1;
		ImprimirArvore(raiz);

		printf("\nIn..:");
		tipo = 2;
		ImprimirArvore(raiz);

		printf("\nPost:");
		tipo = 3;
		ImprimirArvore(raiz);

		printf("\n\n");

	}
}
