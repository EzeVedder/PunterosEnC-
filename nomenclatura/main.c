#include <stdio.h>
#include <stdlib.h>

int main()
{

    //punteros
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero = 66;
    //&numeroDos = &numero;
    punteroNumero = &numero;//le asigno al puntero(en direcccion en memoria) el valor de la variable

    numeroDos = &numero;// asignacion de memoria
    printf("a- %d\n",numeroDos);

    numeroDos = *punteroNumero; //asignacion de valor
    printf("b- %d\n",numeroDos);
    //*punteroNumero = &numero;
    //*punteroNumero = 55;
    printf("%d\n",numero);
    printf("%d\n",numeroDos);
    printf("%d\n",&numero);
    printf("%p\n",punteroNumero);//posicion de memoria de variable
    printf("%p\n",&punteroNumero);//posicion de memoria del puntero
    printf("%d\n",*punteroNumero);//valor de la posicion de memoria
    //printf("%d",*punteroNumero);

    return 0;
}
