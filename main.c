#include <stdio.h>
#include <stdlib.h>
#include "pilaArray.h"

void arreglo(int elem[])
{
    for (int i = 0; i <= cima; i++)
    {
        printf("\n", elem[i]);
    }
}
void apila(int x)
{
    if (ntamao() == TAM)
    {
        printf("No entran mas elementos\n");
    }
    else
    {
        cima++;
        elem[cima] = x;
    }
}
int desapila()
{
    if (estavacia() == 1)
    {
        printf("No hay elementos en la pila\n");
    }
    else
    {
        cima = cima - 1;
        return elem[cima + 1];
    }
}
void vaciaPila()
{
    cima = -1;
}
int ntamao()
{
    return cima + 1;
}
int estavacia()
{
    if (cima == -1)
    {
        return 0;
    }
    return 1;
}
int cima1()
{
    if (estavacia())
        printf("Error, la pila no tiene elementos\n");
    else
    {
        return elem[cima];
    }
}
int main()
{
    int opcion, a, b;
    do
    {
        printf("Menu\n");
        printf("1) Agregar un elemento a la pila\n");
        printf("2) Eliminar y retornar el primer elemento\n");
        printf("3) Retornar el primer elemento sin eliminarlo\n");
        printf("4) Vaciar la pila\n");
        printf("5) Cantidad de elementos de la pila\n");
        printf("6) Saber si la pila tiene o no elementos\n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese un elemento\n");
            scanf("%d", &a);
            apila(a);
            break;
        case 2:
            printf("Se elimino el elemento: %d\n", desapila());
            break;
        case 3:
            printf("El primer elemento de la pila es:%d", cima1());
            break;
        case 4:
            vaciaPila();
            break;
        case 5:
            printf("Cantidad de elementos: %d\n", ntamao());
            break;
        case 6:
            b = estavacia();
            if (b == 0)
            {
                printf("La pila esta vacia\n");
            }
            else
            {
                printf("La pila tiene elementos\n");
            }
            break;
        default:
            printf("Opcion incorrecta\n");
        }

    } while (opcion != 0);
    return 0;
}