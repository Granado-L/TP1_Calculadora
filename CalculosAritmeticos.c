#include "CalculosAritmeticos.h"


float SumaOperandos(float primerNumero, float segundoNumero)
{
    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}


float RestaOperandos(float primerNumero, float segundoNumero)
{
    float resta;
    resta = primerNumero - segundoNumero;
    return resta;
}


float DivisionOperandos(float dividendo, float divisor)
{
    float cociente;
    cociente = dividendo / divisor;
    return cociente;
}


float MultiplicacionOperandos(float primerNumero, float segundoNumero)
{
    float producto;
    producto = primerNumero * segundoNumero;
    return producto;
}


float FactorialA(float primerNumero)
{
	float resultadoA;

	if(primerNumero == 0)
	{
		resultadoA = 1;
	}
	else
	{
        resultadoA = primerNumero * FactorialA(primerNumero - 1);
	}

	return resultadoA;
}

float FactorialB(float segundoNumero)
{
	float resultadoB;

	if(segundoNumero == 0)
	{
		resultadoB = 1;
	}
	else
	{
        resultadoB = segundoNumero * FactorialB(segundoNumero - 1);
	}

	return resultadoB;
}


