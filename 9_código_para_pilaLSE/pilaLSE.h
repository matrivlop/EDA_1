#ifndef PILALSE_H_INCLUDED
#define PILALSE_H_INCLUDED

typedef struct nodo {
    int info;
    struct nodo *sig; //APUNTADOR AL SIG NODO DE LA PILA
} Nodo;

typedef struct {
    Nodo *tope ; //INDICA LA CIMA DE LA PILA
} Pila;

Pila *crearPila();
void push(Pila *pila, int dato);
int pilaVacia(Pila pila);
int pop (Pila *pila);
int obtenerDatoTope(Pila pila);
void inicializarPila(Pila *pila);
void listar(Pila pila);

#endif // PILALSE_H_INCLUDED
