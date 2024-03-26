#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int
main ()
{
  int n, *p, i = 0, x, menor;
  char comando[5], *a, *d;
  scanf ("%d", &n);
  p = malloc (n * sizeof (int));
  for (int b = 0; b < n; b++)
    {
      scanf ("%s", comando);
      if (strcmp (comando, "PUSH") == 0)
	{
	  scanf ("%d", &x);
	  p[i] = x;
	  i++;
	}
      else if (strcmp (comando, "POP") == 0)
	{
	  if (i == 0)
	    printf ("EMPTY\n");
	  else i--;
	}
      else
	{
	  if (i == 0)
	    printf ("EMPTY\n");
	  else
	    {
	      menor = p[i - 1];
	      for (int j = i - 1; j > -1; j--)
		{
		  if (menor > p[j])
		    menor = p[j];
		}
	      p[i] = menor;
	      printf ("%d\n", p[i]);
	    }
	}
    }
}
