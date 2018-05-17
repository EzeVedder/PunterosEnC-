#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero,int cantidad);

int main()
{
    int numeros[3];
    int *puntero;//es una direccion de memoria y tambien tiene un tipo de dato

    numeros[0] = 9;
    numeros[1] = 999;
    numeros[2] = 9999;
    mostrar(numeros,3);

    return 0;
}

void mostrar(int *puntero,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\nnumero :%d",*(puntero+i));
    }


}
