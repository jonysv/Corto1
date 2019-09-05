#include <stdio.h>
#include <stdlib.h>

int main() {
    //preguntamos de que dimension quiere el vector
    int dimension;
    printf("de que tamanio sera el vector?\n");
    scanf("%d",&dimension);
    int vector[dimension];

    //variables para el funcionamiento de borrar
    int borrar;

    //preguntamos  que rando de aletorios quiere generar del 1 hasta el elegido
    int aletorios;
    printf("hasta que numero quiere que se generen los numeros aletorios?\n");
    scanf("%d",&aletorios);
    //mostramos el vector
    printf("El vector es\n");
    for (int i = 0; i <dimension ; ++i) {
        vector[i]=rand()%(aletorios+1);
        printf("%d ",vector[i]);
    }

    //preguntamos la posicion que quiere borrar
    printf("\n");

    printf("Que posicion desea borrar?\n");
    scanf("%d",&borrar);
    while (borrar<1 || borrar>dimension){
        printf("valor erroneo intente de nuevo\n");
        printf("Que posicion desea borrar?\n");
        scanf("%d",&borrar);

    }
    for (int j = borrar; j <dimension ; ++j) {
        vector[j-1]=vector[j];
    }
    //cambiamos la varibale dimension para mostrar
    dimension=dimension-1;

    //mostramos de nuevo el vector
    printf("El nuevo vector es\n");

    for (int i = 0; i <dimension ; ++i) {
        printf("%d ",vector[i]);
    }
    return 0;
}