#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100000
int main ()
{

        int  datos=0,temp=0;
        srand(time(NULL));
        printf("Ingresa el numero de datos a registrar\n");
        scanf("%d", &datos);
        int aleatorio[datos];
        for (int i = 0; i < datos; i ++)
        {
           aleatorio[i]= rand()%MAX;
           printf("%d ", aleatorio[i]);
        }
/*orden*/
    for (int i = 0; i < datos ; i++)
    {
        for (int j = i + 1; j < datos; j++)
    {
      if (aleatorio[j] < aleatorio[i])
      {
        temp = aleatorio[j];
        aleatorio[j] = aleatorio[i];
        aleatorio[i] = temp;
      }
        }
    }

printf ("\n Los números ordenados son:\n");
  for (int i = 0; i < datos; i++)
  {
    printf("%d, ", aleatorio[i]);
  }
}
