#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;//4
    char b;//1
    char c;//1---> el resultado de los tres es 6 por lo que va a terminar sumandose 2 para completar 8bytes
}dato;



int main()
{
    dato d;
    d.a=5;
    d.b='<';
    d.c='a';

    dato* pDato;
    pDato = &d;

    printf("%d -- %d",&d,&d.a);//& y d para ver la direccion de memoria ---a es donde empieza la estructura por eso es la misma direccion de memoria
    printf("%d--%c",pDato);

    return 0;
}
