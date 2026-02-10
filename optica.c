#include <stdio.h>
int main()
{
    int Edad;
    float Precio;
    float Precio_Final;
    printf("Ingrese la edad del cliente: ");
    scanf("%d", &Edad);
    printf("Ingrese el precio del armazon: ");
    scanf("%f", &Precio);
        if ((Edad < 12 || Edad > 60)&& (Precio > 5000)){
Precio_Final = (Precio * 0.95)*0.98;
printf("Aplica descuento por edad y precio.\nEl precio final con del armazon descuento por edad mas descuento por precio es: $%.2f\n", Precio_Final);
        } 
        else if (Edad < 12 || Edad > 60){
Precio_Final = Precio * 0.95;
printf("Aplica descuento por edad.\nEl precio final con del con descuento por edad es: $%.2f\n", Precio_Final);
        }
        else if (Precio > 5000){
Precio_Final = Precio * 0.98;
printf("Aplica descuento por precio.\nEl precio final del armazon con descuento por precio es: $%.2f\n", Precio_Final);
        }
        else {
printf("El precio final del armazon es: $%.2f\n", Precio);
        }
        return 0;
}
        