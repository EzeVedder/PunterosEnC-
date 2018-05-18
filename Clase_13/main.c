#include <stdio.h>
#include <stdlib.h>

int cargarArray(int*,int);
int mostrarArray(int*,int);
int main()
{
    char vector[3];
    //int* puntero;
    //puntero = vector;
    //int i;

    if(cargarArray(vector,3) == 1)//el if espera un valor booleano si es 0 es falso
    {
        printf("\nCarga exitosa!!!");
    }
    else
    {
        printf("Error al cargar los datos");
    }

    mostrarArray(vector,3);


   /* for(i=0;i<3;i++)
    {
        printf("%d\n",*(puntero+i));
    }*/


    return 0;
}


int cargarArray(int* array,int tam)
{
    int i;
    int retorno = 0;
    if(array != NULL)
    {
        retorno = 1;
        for(i=0;i<tam;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",array+i);//suma el sizeof (4 bytes) el valor que toma la variable i lo multiplica por el sizeof
        }
    }
    return retorno;
}

int mostrarArray(int* array,int tam)
{
    int i;
    int retorno = 0;
    if(array != NULL)
    {
        retorno = 1;
        for(i=0;i<tam;i++)
        {
            printf("\n%d",*(array+i));
        }
    }
    return retorno;
}
