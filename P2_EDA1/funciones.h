#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define MAX 5
//VARIABLES GLOBALES
extern int arreglo[MAX];
extern int indice;

//PROTOTIPOS DE LAS FUNCIONES
void insertar(int dato);
int validarEspacio();
void listar();
int buscar(int dato);
void actualizar(int pos, int datoNuevo);
int borrar(int pos);


#endif // FUNCIONES_H_INCLUDED
