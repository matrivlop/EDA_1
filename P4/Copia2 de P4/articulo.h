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

void capturarArticulos (Articulo articulos[], int size);
void listarArticulos (Articulo articulos[], int size);
void mayorPrecio (Articulo articulos[], int size);
void buscarArticulo (Articulo articulos[], int size, int clave);
#endif // ARTICULO_H_INCLUDED