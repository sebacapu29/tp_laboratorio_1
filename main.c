#include <stdio.h>
#include <stdlib.h>
#include "FuncionesMat.h"


/** \brief Muestra el menu de opciones
 *
 * \param vectorRango es un array de enteros que contiene los rangos de opciones a validar
 * \param operandoUno es el valor del primer operando
 * \param operandoDos es el valor del segundo operando
 * \param banderaUno es el valor que indica si se ingreso un valor en operandoUno
 * \param banderaDos es el valor que indica si se ingreso un valor en operandoDos
 * \return Nos devuelve un numero entero que es la opcion solicitada por el usuario.
 *
 */

int Menu(int vectorRango[], float operandoUno, float operandoDos, int banderaUno, int banderaDos);

/** \brief Valida que la opcion elegida este en el rango solicitado por el vectorRangos.
 *
 * \param opcion, entero a validar
 * \param vectorRango es un array de enteros que contiene los rangos de opciones a validar.
 * \return Devuelve el numero entero validado.
 *
 */


int ValidaOpcion(int opcion, int vectorRango[]);

/** \brief Solicita los datos al usuario
 *
 * \param bandera nos indica si los valores estan precargados o no.
 * \return Nos devuelve un valor flotante.
 *
 */
float SolicitarDato(int bandera);

/** \brief La funcion muestra por pantalla un cartel
 *
 * \param operando es el valor flotante precargado por el usuario
 * \param cadena, es una array de caracteres compuesta por los datos del operando 1 o 2 que seran reemplazados por
 * El valor numerico flotante.
 * \param bandera es el valor entero que indica si se debe mostrar el cartel generico  o con el valor
 * precargado del operando.
 * \param numOperando es el valor entero que indicara en el cartel el numero de operando.
 * \return No devuelve nada
 *
 */

void mostrarOperandos(float operando, char cadena[], int bandera);

/** \brief Calcula el factorial de un numero.
 *
 * \param operandoUno es el valor flotante a calcular el factorial
 * \return un numero flotante.
 *
 */
float Factorial(float operandoUno);

/** \brief valida que el denominador de la division no sea cero.
 *
 * \param operando es el valor flotante a validar.
 * \return un valor flotante.
 *
 */

float ValidaDivision(float operando);

int main()
{
    int vectorRango[2]={1,9};
    float operandoUno;
    float operandoDos;
    int banderaUno=0;
    int banderaDos=0;
    int opcionElegida;
    do{
    opcionElegida = Menu(vectorRango, operandoUno, operandoDos, banderaUno, banderaDos);

    switch(opcionElegida)
    {
        case 1:
            banderaUno=1;
            operandoUno = SolicitarDato(banderaUno);
            break;
        case 2:
            banderaDos=1;
            operandoDos = SolicitarDato(banderaDos);
            break;
        case 3:
            if(banderaUno ==0 && banderaDos ==0)
            {
                operandoUno = SolicitarDato(banderaUno);
                operandoDos = SolicitarDato(banderaDos);
                banderaUno=1;
                banderaDos=1;
            }
            else
                if(banderaUno==0 && banderaDos!=0)
            {
                operandoUno = SolicitarDato(banderaUno);
                banderaUno=1;
            }
            else
                if(banderaUno !=0 && banderaDos==0)
            {
                operandoDos = SolicitarDato(banderaDos);
                banderaDos=1;
            }
            printf("El resultado de la suma (A+B) es: %.2f\n", Suma(operandoUno,operandoDos));
            break;
        case 4:
             if(banderaUno ==0 && banderaDos ==0)
            {
                operandoUno = SolicitarDato(banderaUno);
                operandoDos = SolicitarDato(banderaDos);
                banderaUno=1;
                banderaDos=1;
            }
            else
                if(banderaUno==0 && banderaDos!=0)
            {
                operandoUno = SolicitarDato(banderaUno);
                banderaUno=1;
            }
            else
                if(banderaUno !=0 && banderaDos==0)
            {
                operandoDos = SolicitarDato(banderaDos);
                banderaDos=1;
            }
             printf("El resultado de la resta (A-B) es: %.2f\n", Resta(operandoUno,operandoDos));
            break;
        case 5:
             if(banderaUno ==0 && banderaDos ==0)
            {
                operandoUno = SolicitarDato(banderaUno);
                operandoDos = SolicitarDato(banderaDos);
                banderaUno=1;
                banderaDos=1;
            }
            else
                if(banderaUno==0 && banderaDos!=0)
            {
                operandoUno = SolicitarDato(banderaUno);
                banderaUno=1;
            }
            else
                if(banderaUno !=0 && banderaDos==0)
            {
                operandoDos = SolicitarDato(banderaDos);
                banderaDos=1;
            }
            operandoDos=ValidaDivision(operandoDos);
            printf("El resultado de la division (A/B) es: %.2f\n", Division(operandoUno,operandoDos));
            break;
        case 6:
             if(banderaUno ==0 && banderaDos ==0)
            {
                operandoUno = SolicitarDato(banderaUno);
                operandoDos = SolicitarDato(banderaDos);
                banderaUno=1;
                banderaDos=1;
            }
            else
                if(banderaUno==0 && banderaDos!=0)
            {
                operandoUno = SolicitarDato(banderaUno);
                banderaUno=1;
            }
            else
                if(banderaUno !=0 && banderaDos==0)
            {
                operandoDos = SolicitarDato(banderaDos);
                banderaDos=1;
            }
            printf("*El resultado de la multiplicacion (A*B) es: %.2f\n", Multiplicacion(operandoUno,operandoDos));
            break;
        case 7:
            if(banderaUno==0)
            {
                operandoUno = SolicitarDato(banderaUno);
                banderaUno=1;
            }
            printf("\nEl resultado del factorial (A!) es: %.2f\n",Factorial(operandoUno));
            break;
        case 8:
             if(banderaUno ==0 && banderaDos ==0)
            {
                operandoUno = SolicitarDato(banderaUno);
                operandoDos = SolicitarDato(banderaDos);
                banderaUno=1;
                banderaDos=1;
            }
            else
                if(banderaUno==0 && banderaDos!=0)
            {
                operandoUno = SolicitarDato(banderaUno);
                banderaUno=1;
            }
            else
                if(banderaUno !=0 && banderaDos==0)
            {
                operandoDos = SolicitarDato(banderaDos);
                banderaDos=1;
            }
            printf("\n*El resultado de la suma (A+B) es: %.2f", Suma(operandoUno,operandoDos));
            printf("\n*El resultado de la resta (A-B) es: %.2f", Resta(operandoUno,operandoDos));
            printf("\n*El resultado de la division (A/B) es: %.2f", Division(operandoUno,operandoDos));
            printf("\n*El resultado de la multiplicacion (A*B) es: %.2f\n", Multiplicacion(operandoUno,operandoDos));
            break;
        case 9:
            printf("\nHasta luego!!\n");
            break;
    }
    system("\npause\n");
    system("cls");
    }while(opcionElegida != 9);

    return 0;

}

int Menu(int vectorRango[], float operandoUno, float operandoDos, int banderaUno, int banderaDos)
{
    int opcion;
    char caracteresUno[3]={'1','A','x'};
    char caracteresDos[3]={'2','B','y'};
    //int opcionValidada;
    printf("\n      Menu Principal");
    printf("\n    *****************\n\n");
    mostrarOperandos(operandoUno,caracteresUno,banderaUno);
    mostrarOperandos(operandoDos,caracteresDos,banderaDos);
    printf("\n3. Calcular la suma (A+B)");
    printf("\n4. Calcular la resta (A-B)");
    printf("\n5. Calcular la division (A/B)");
    printf("\n6. Calcular la multiplicacion (A*B)");
    printf("\n7. Calcular el factorial (A!)");
    printf("\n8. Calcular todas las operaciones");
    printf("\n9. Salir");
    printf("\nIngrese la opcion deseada: ");
    scanf("%d", &opcion);
    opcion = ValidaOpcion(opcion, vectorRango);

    return opcion;
}

int ValidaOpcion(int opcion, int vectorRango[])
{
    while(opcion < vectorRango[0] || opcion > vectorRango[1])
    {
        printf("\nError, ingrese opcion valida.\n");
        scanf("%d", &opcion);
    }
    return opcion;
}

float SolicitarDato(int bandera)
{
    float dato;
    if(bandera!=0)
    {
        printf("\nIngrese operando: ");
        scanf("%f",&dato);
    }
    else
    {
        printf("\nEs necesario ingresar previamente los valores para realizar la operacion\n");
        printf("Ingrese operando: ");
        scanf("%f",&dato);
    }
    return dato;
}

void mostrarOperandos(float operando, char cadena[], int bandera)
{
    if(bandera==0)
    {
        printf("\n1. Ingresar %c operando (%c = %c)",cadena[0], cadena[1],cadena[2]);
    }
    else
    {
        printf("\n1. Ingresar %c operando (%c = %.2f)",cadena[0], cadena[1], operando);
    }
}

float ValidaDivision(float operando)
{
    while(operando==0)
	{
		printf("Se produjo un error, el operando 2 debe ser distinto de cero, vuelva a ingresar: ");
		scanf("%f", &operando);
	}
	return operando;
}

float Factorial(float operandoUno)
{
    float resultado=1;
    int indice;
    if(operandoUno!=0)
    {
        for(indice = 1; indice<=operandoUno; indice++)
        {
            resultado*=indice;
        }
    }
    return resultado;
}
