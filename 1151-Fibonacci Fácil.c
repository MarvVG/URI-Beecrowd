    #include <stdio.h>
    
    int main (void)
    {
      int primeiro = 0, segundo = 1;
      int tam;
      scanf ("%d", &tam);
      printf ("%d", primeiro);
    
    
      for (int i = 1; i < tam; i++)
        {
          printf (" %d", segundo);
          int proximo = primeiro + segundo;
          primeiro = segundo;
          segundo = proximo;
    
        }
      printf ("\n");
      return 0;
    }
