#include <stdio.h>
int main ()
{
    float Peso, Altura, IMC;
    int opcion;
    char Nombre[20];
    do {
        printf("\n1)Calcular IMC\n2)Salir\nOpcion: ");
        scanf("%d", &opcion);
        if (opcion == 1){
            printf("Introduce tu nombre: ");
    scanf("%19s", Nombre);
    printf("Introduce tu peso (kg): ");
    scanf("%f", &Peso);
    printf("Introduce tu altura (m): ");
    scanf("%f", &Altura);
    IMC = ((Peso)/(Altura*Altura));
    printf("IMC: %2f.\n", IMC);
if (IMC < 16)
{
    printf("IMC: %.2f\n", IMC);
    printf("Criterio de ingreso al hospital");

} else if (IMC>= 16 && IMC<17)
{
    printf("IMC: %.2f\n", IMC);
    printf("Infrapeso");
} else if (IMC >= 17 && IMC< 18)
{
    printf("IMC: %.2f\n", IMC);
    printf("Bajo peso");
}else if (IMC >= 18 && IMC< 25)
{
    printf("IMC: %.2f\n", IMC);
    printf("Peso normal (saludable)");
} else if (IMC >= 25 && IMC< 30)
{
    printf("IMC: %.2f\n", IMC);
    printf("Sobrepeso (Obesidad de grado 1)");
}else if (IMC >= 30 && IMC< 35)
{
    printf("IMC: %.2f\n", IMC);
    printf("Sobrepeso (Obesidad de grado 2)");
} else if (IMC >= 35 && IMC< 40)
{
    printf("IMC: %.2f\n", IMC);
    printf("Sobrepeso (Obesidad de grado 3)");
} else
{
    printf("IMC: %.2f\n", IMC);
    printf("Obesidad morbida (Obesidad de grado 4)");
}
        }

    }while (opcion != 2);
    return 0;
}
    
