#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeros[2][2];
    int i, j;

    printf("Digite os elementpos para matriz: \n");

    for (i = 0; i < 2; i++)
    {

        for (j = 0; j < 2; j++)
        {

            printf("Elemento da linha %d coluna %d \n", i + 1, j + 1);
            scanf("%d", &numeros[i][j]);
        }
    }

    printf("Exibindo os dados da matriz \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf("Elemento da linha %d coluna %d: %d \n", i + 1, j + 1, numeros[i][j]);
        }
    }

    return 0;
}