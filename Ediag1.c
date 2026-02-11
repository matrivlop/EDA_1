#include <stdio.h>

int main() {
    int edad, opcion;
    float saldo, precio = 0;

    printf("Ingrese su edad:\n");
    scanf("%d", &edad);

    if (edad < 18) {
        printf("¡Ve a la casa a dormir niñ@!\n");
        return 0;
    }

    printf("¿Con cuanto dinero cuentas?\n");
    scanf("%f", &saldo);

    if (saldo >= 2000) {
        printf("¡Adelante señor/señorita!\nPase a zona VIP\n");
    } else {
        printf("Pase a zona general\n");
    }

    do {
        printf("\n¿Qué desea beber?\n (1) wiski $500\n (2) ron $200\n (3) tequila $400\n (4) nadddda...\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                precio = 500;
                break; 
            case 2:
                precio = 200;
                break; 
            case 3:
                precio = 400;
                break; 
            case 4:
                printf("\nlo siento señor...¡sacaborrachos uno aquí!\n");
                return 0;
            default:
                printf("\nOpcion invalida.\n");
                continue; 
        }

        if (saldo < precio) {
            printf("Cuanto lo lamento señor... ¡Uno mas desplumado!\n");
            
        } else {
            saldo -= precio;
            printf("Bebida servida. Saldo restante: $%.2f\n", saldo); 
        }

    } while (saldo > 0);

    return 0;
}