#include <stdio.h>
#include <stdlib.h>
#include "CalculosAritmeticos.h"
//Granado, Leonel
int main()
{


    float primerNumero;
    float segundoNumero;
    int opcion;
    float suma;
    float resta;
    float division;
    float producto;
    float resultadoA;
    float resultadoB;
    float factorial;
    char salir;
    primerNumero = 0;
    segundoNumero = 0;
    salir = 'n';

    do{
        printf("\n1- Ingresar 1er operando \n",primerNumero);
        printf("2- Ingresar 2do operando \n",segundoNumero);
        printf("3- Calcular todas las operaciones \n");
        printf("4- Salir \n");
        printf(" Elija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el 1er operando: ");
                scanf("%f", &primerNumero);
                break;

            case 2:
                printf("Ingrese el 2do operando: ");
                scanf("%f", &segundoNumero);
                break;


            case 3:
                printf("1er operando: %.2f\n",primerNumero);
                printf("2do operando: %.2f\n",segundoNumero);
                printf("Resultados: \n");
                suma = SumaOperandos(primerNumero,segundoNumero);
                printf("La suma es %.2f\n",suma);
                resta = RestaOperandos(primerNumero,segundoNumero);
                printf("La resta es %.2f\n",resta);
                producto = MultiplicacionOperandos(primerNumero,segundoNumero);
                printf("El producto es %.2f\n",producto);
                if(segundoNumero == 0){
                    printf("Error. No se puede dividir por 0.\n");
                }
                else{
                    division = DivisionOperandos(primerNumero,segundoNumero);
                    printf("La divicion es %.2f\n",division);
                }
                resultadoA = FactorialA(primerNumero);
                printf("El factorial de A es %.2f\n",resultadoA);
                resultadoB = FactorialB(segundoNumero);
                printf("EL factorial de B es %.2f\n",resultadoB);
                break;


            case 4:
                salir = 's';
                break;
        }
    }while(salir == 'n');


    return 0;
}


