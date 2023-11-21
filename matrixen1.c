#include <stdio.h>


int main(){
    
    int n,m;
    printf("Ingrese el numero de filas y  columnas \n");
    scanf ("%d",&n);
    scanf ("%d",&m);

    int Matrix[n][m];

    for (int i = 0; i < n; i++)
    {

        printf("\n");
        for (int j = 0; j < m; j++)
        {
            if (i == j){
                Matrix[i][j] = 1;
            }
            else {
                Matrix[i][j] = 0;
            }
            printf(" %d ", Matrix[i][j]);   
        }
    }
 
    return 0;
}