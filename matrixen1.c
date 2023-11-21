#include <stdio.h>

int main()
{

    int n, m;
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &n);    //se pide al usuario el tamana de la matrix
    printf("Ingrese el numero de filas  \n");
    scanf("%d", &m);

    int Matrix[n][m];

    for (int i = 0; i < n; i++)
    {               //se explica para imprimir los valores en x

        printf("\n");
        for (int j = 0; j < m; j++) //para imprimir valores en y
        {
            if (i == j)
            {
                Matrix[i][j] = 1; //se utiliza eso para que se imprima en los puntos iguales de cordenada en i y j que es la diagonal principal 
            }
            else
            {
                Matrix[i][j] = 0;
            }
            printf(" %d ", Matrix[i][j]);
        }
    }

    return 0;
}