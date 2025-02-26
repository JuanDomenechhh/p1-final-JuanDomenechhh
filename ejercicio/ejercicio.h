/*
 * Programación 1 - Ingenieria en Computación - UNRN Andina
 */

#ifndef EJERCICIO_H
#define EJERCICIO_H
#define Maximo 125
#include <stdlib.h>
#include <stdbool.h>


typedef struct cadena_t
{
    void* inicio;
}cadena_t;

typedef struct nodo_t
{
    int posicion;
    char caracter;
    void* siguiente;
}nodo_t;


/*funcion que crea una lista
*@return devuelve el puntero a la lista
*/
cadena_t* crear_lista();


/*funcion que carga datos dentro de la lista indicada, esta funcion equival a un push
*@param comienzo, es la lista a ingresar el dato
*@param poscicion, es la poscicion en la cual se encontraba el dato
*/
void carga_caracteres(cadena_t* comienzo, int poscion);

/*funcion que quita un dato de la lista
*@param cadena, la cadena en si
*/
void pop(cadena_t* cadena);

/*funcion que pregunta si la cadena esta vacia
*retorna tru si es vacia y false si no lo esta
*/
bool esta_vacia(cadena_t* cadena);


/*funcion que balancea agregando y eliminando elementos de una lista
*/
void balanceo (cadena_t* parentesis, cadena_t* corchete, cadena_t* llave, char* cadenaingresada);

#endif
