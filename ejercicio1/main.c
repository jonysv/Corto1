#include <stdio.h>

int main() {
    //declaramos la varibale que nos permitira pedirle la opcion al usuario
    int opcion=0;
    //la varibale que guardara que asiento quiere el usuario
    int asiento=0;
    //el vector sala con todos los asientos
    int sala[25];
    //y el float que nos llevara el control de las ganancias
    float ganancias=0.0;
    //aqui enpezamos el menu en un bucle que permita realizar las acciones cuantas veces quiera
    printf("1. vender entradas 2. ver ganancias  (cualqiuer otro numero para salir)\n");
    scanf("%d",&opcion);
    while (opcion==1 || opcion==2){
        //opcion uno para vender asientos
        if (opcion==1){
        printf("Los asientos de la primera fila cuestas $5 (1-5) y los de la ultima $2.50 (21-25) y el resto $3.50\n");
            //hacemos una validacion extricta para que elija el numero de asiento correcto
            printf("que asiento desea? (numerados del 1 al 25)\n");
            scanf("%d",&asiento);
            while(asiento<0 || asiento>25){
                printf("valor erroneo intente de nuevo");
                printf("que asiento desea? (numerados del 1 al 25)\n");
                scanf("%d",&asiento);
            }
            //validamos si esta lleno el asiento y si no es asi lo vendemos
            if (sala[asiento-1]==1){
                printf("No se puede vender el asiento esta ocupado\n");
            }else{
                sala[asiento-1]=1;
                if (asiento>0 && asiento<6){
                    ganancias=ganancias+5;
                } else if (asiento>5 && asiento<21){
                    ganancias=ganancias+3.50;
                } else{
                    ganancias=ganancias+2.50;
                }
                printf("boleto vendido con exito\n");
            }

        }
        //imprime las variable ganancias que nos lleva el control de los asientos vendidos
        if (opcion==2){
            printf("Las ganancias del cine hasta ahorita son %.2f\n",ganancias);
        }


        //hacemos la pregunta dentro del bucle para que le permita seguir operando o salir
        printf("1. vender entradas 2. ver ganancias (cualqiuer otro numero para salir)\n");
        scanf("%d",&opcion);
    }

    return 0;
}