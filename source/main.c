#include <stdio.h>
#include "../Librerias/suma.h"
#include "../Librerias/resta.h"
#include "../Librerias/multiplicacion.h"
#include "../Librerias/division.h"

int main(int argc, char const *argv[])
{
    int a , b;
    printf ("Ingrese el primer valor : ");
    scanf ("%d",&a);

    printf ("Ingrese el segundo valor : ");
    scanf ("%d",&b);

    printf("El resultado de la SUMA es : %d\n",suma(a,b));

    printf("El resultado de la RESTA es : %d\n",resta(a,b));

    printf("El resultado de la MULTIPLICACION es : %d\n",multiplicacion(a,b));

    printf("El resultado de la DIVISION es : %d\n",division(a,b));
    return 0;
}
