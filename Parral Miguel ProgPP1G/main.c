#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM  20

struct
{
    char nombre[20];
    int recuperados;
    int muertos;

} typedef ePais;

void actualizarRecuperados (ePais* paises, int tam);
void ordenarCaracteres ();
void invertirCadena ();

ePais paises[20] = {{"argentina", 100, 50}, {"belgica", 500, 2}, {"usa", 10, 1000}, };
ePais auxPais;


int main()
{
    actualizarRecuperados(paises, TAM);
    ordenarCaracteres();

    return 0;
}

void actualizarRecuperados (ePais* paises, int tam)
{
    printf("ingrese nombre de pais\n");
    gets(auxPais.nombre);
    printf("ingrese recuperados\n");
    scanf("%d",&auxPais.recuperados);
    for (int i=0; i<tam; i++)
    {

        if (strcmp (paises[i].nombre, auxPais.nombre) == 0)
        {
            paises[i].recuperados = paises[i].recuperados + auxPais.recuperados;
            printf("cantidad de recuperados: ");
            printf ("%d\n", paises[i].recuperados );

        }
        return;
    }
}

void ordenarCaracteres () {
    char caracteres [10];
    printf("ingrese caracteres:\n");
    gets(caracteres);
    char aux;

for (int x=0; x - 10 -1; x++) {
        for (int j = x+1; j < 10; j++ ) {

            if (caracteres[x] > caracteres[j]) {

                aux = caracteres[x];
                caracteres[x] = caracteres[j];
                caracteres[j] = aux;
            }
        }
    }
    for (int n = 0; n < 10; n++) {
        printf("%c",caracteres[n]);
    }
}
/*
void invertirCadena () {
char cadena [10];
char invierte [10]

    printf("ingrese cadena:\n");
    gets(cadena);
    char auxCad;

    for (int a )

}
*/
