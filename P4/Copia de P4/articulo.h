#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED
#define MAX_TEXTO 50

struct Proveedor {
    char apellido [MAX_TEXTO];
    char nombre [MAX_TEXTO];
};
typedef struct {
    int clave;
    char nombre [MAX_TEXTO];
    float precio;
    struct Proveedor unProveedor;
} Articulo;

void capturarArticulo (Articulo *unArticulo); /*El parámetro se recibe por referencia porque queremos modificar el contenido 
de la variable (Recibe la dirección de la variable)*/
void listarArticulo (Articulo unArticulo); //El parámetro se recibe por valor porque no queremos modificar el contenido
void listarArticulos (Articulo lista[], int cantidad);
void mayorPrecio (Articulo lista[], int cantidad);
int obtenerArticulosMayorPrecio (Articulo lista[], int cantidad, int indices[]);
int buscarArticuloPorClave (Articulo lista[], int cantidad, int clave);
#endif // ARTICULO_H_INCLUDED