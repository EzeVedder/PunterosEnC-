#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[11] = {"MiNombre"};
    char *apellido = {"MiApellido"};
    char *puntero;
    puntero = nombre;

    printf("\n%s",nombre);
    printf("\n%s",apellido);//--->no lo muestra porque en realidad es un puntero (int)
    //printf("\n%s",*puntero);
    printf("\n%s",puntero);

    int i;
    for(i=0;i<11;i++)
    {
        if(*(apellido+i)!= '\0')
        {
            printf("\n%c",*(apellido+i));
        }
    }

    printf("\n----------");
    printf("\n%s",apellido);


    return 0;
}
