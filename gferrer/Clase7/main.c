#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int codigo;
    char descripcion[50];
    int stock;
    float precio_costo;
    //struct T_Poducto * next;
}T_Producto;

void mostrar(T_Producto producto);
void cargar(T_Producto *producto);
void strcopyProducto(T_Producto *ProductoDestino,T_Producto ProductoOrigen);
T_Producto *cargar2();

int main()
{
    T_Producto unProducto;
    T_Producto otroProducto;
    //T_Producto *productoB= (T_Producto *) malloc (sizeof( T_Producto));

    system("cls");
    T_Producto *pproducto=cargar2();

    if (pproducto == NULL )
    {
			printf("ERROR: sin memoria \n");
	}
	else
    {
        cargar(pproducto);
        mostrar(*pproducto);

    }

    free(pproducto);

    //cargar(&unProducto);
    //mostrar(unProducto);
    //strcopyProducto(&otroProducto,unProducto);

    getch();
    return 0;
}

void mostrar(T_Producto producto)
{
    printf("\n\n");
    printf("\n Codigo: %d",producto.codigo);
    printf("\n descripcion: %s",producto.descripcion);
    printf("\n stock: %d",producto.stock);
    printf("\n precio_costo: %f",producto.precio_costo);
    printf("\n\n\n");
}

void cargar(T_Producto *producto)
{
    producto->codigo=0001;
    strcpy(producto->descripcion,"descipcion producto 1..");
    producto->stock=10;
    producto->precio_costo=200;
}

T_Producto *cargar2()
{
    T_Producto *productoB= (T_Producto *) malloc (sizeof( T_Producto));
    return    productoB;
}

void strcopyProducto(T_Producto *ProductoDestino,T_Producto ProductoOrigen)
{
    ProductoDestino->codigo=ProductoOrigen.codigo;
    strcpy(ProductoDestino->descripcion,ProductoOrigen.descripcion);
    ProductoDestino->precio_costo=ProductoOrigen.precio_costo;
    ProductoDestino->stock=ProductoOrigen.stock;
}


/*
Referencia
https://www.codingunit.com/c-tutorial-the-functions-malloc-and-free

*/
