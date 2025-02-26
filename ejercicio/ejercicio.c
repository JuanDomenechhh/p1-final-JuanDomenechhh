/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */
 
#include "ejercicio.h"

cadena_t* crear_lista()
{
    cadena_t* comienzo = (cadena_t*) malloc(sizeof(cadena_t));
    comienzo->inicio = NULL;
    return comienzo;
}

void carga_caracteres(cadena_t* comienzo, int poscion)
{
    nodo_t* nuevo_nodo = (nodo_t*) malloc(sizeof(nodo_t));
    nuevo_nodo->siguiente = comienzo->inicio;
    comienzo->inicio=nuevo_nodo;
    nuevo_nodo->posicion=poscion;
}

void pop(cadena_t* cadena)
{
    nodo_t* temp;
    temp = cadena->inicio;
    cadena->inicio=temp->siguiente;
    free(temp);
}

bool esta_vacia(cadena_t* cadena)
{
    int flag = 0;
    nodo_t* temp = cadena ->inicio;
    if (temp==NULL)
    {
        flag=1;
    }
    free(temp);
    return (flag==1);
}

void balanceo (cadena_t* parentesis, cadena_t* corchete, cadena_t* llave, char* cadenaingresada)
{
    for (int i=0; cadenaingresada[i] != '\0'; i++)
            {
                if (cadenaingresada[i]=='{')
                {
                    carga_caracteres(llave,i);
                }
                else if (cadenaingresada[i] == '[')
                {
                    carga_caracteres(corchete,i);
                }
                else if (cadenaingresada[i] == '(')
                {
                    carga_caracteres(parentesis,i);
                }
                else if (cadenaingresada[i] == '}')
                {
                    pop(llave);
                }
                else if (cadenaingresada[i] == ']')
                {
                    pop(corchete);
                }
                else if (cadenaingresada[i] == ')')
                {
                    pop(parentesis);
                }
                
            }
}