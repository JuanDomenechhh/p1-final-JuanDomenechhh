/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#include <assert.h>
#include <stdio.h>
#include "ejercicio.h"
#include "libreria.h"


int main(int argc, char* argv[Maximo])
{
    if (argc>1)
    {
        
        char*cadenaingresada= argv[1];
        if (cadenaingresada != NULL)
        {
            cadena_t* parentesis = crear_lista();
            cadena_t* corchete = crear_lista();
            cadena_t* llave = crear_lista();
            balanceo(parentesis,corchete,llave,cadenaingresada);
            if (esta_vacia(llave) && esta_vacia(parentesis) && esta_vacia(corchete))
            {
                printf("esta balanceado");
            }
            else
            {
                printf("la cadeba no esta balanceada");
            }
        }
        else 
        {
            printf("error al cargar la cadena");
        }
    }
    return 0;
}
