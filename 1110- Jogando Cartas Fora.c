#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct teste
{
  int d;
  struct teste *prox;
};
int
main ()
{
  int n, t;
  while (1)
    {
        int x=0;
      scanf ("%d",&n);
      if (n == 0)
	break;
      struct teste *C, *i, *f;
      C = malloc (n * sizeof (struct teste));
      for (t = 0; t < n; t++)
	{
	  C[t].d = t + 1;
	  if (t<n-1)
	    C[t].prox = &C[t + 1]; 
	  else
	   C[t].prox = NULL;
	}
      i = &C[0];
      f = &C[n - 1];
      printf ("Discarded cards:");
      do
	{
	  if (x < n-2)
	    printf (" %d,", i->d);
	  else
	    printf (" %d", i->d);
	  i = i->prox;
	  f->prox = i;
	  f = i;
	  i = i->prox;
	  x++;
	}
      while (x !=n-1);
      printf ("\nRemaining card: %d\n", f->d);
    

    }

}
