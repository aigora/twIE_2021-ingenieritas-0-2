#include<stdio.h>
#include <string.h>

int main()
{
    int jugadores;
    char nombre1[100], nombre2[100], nombre3[100], nombre4[100];
    printf("¡¡BIENVENIDOSSSSS AL TRIVIAL DE INGENIERÍA!!\n INTRODUCCIÓN:\n"
            "Este juego consiste en el tipico juego de trivial que todos ya conocemos.\n"
           "El objetivo de este juego es obtener los cuatro quesitos de las diferentes categorias.\n"
           "INSTRUCCIONES:\n1º Elegir numero de jugadores.\n 2º Elegir nombre del jugador.\n"
           "3º Lanzar un dado para elegir el orden de los jugadores.\n4º A JUGAR\n"
           "ENTER PARA EMPEZAR\n");


            printf("Escribe el numero de jugadores(de 2 a 4):\n ");
            scanf("%d", &jugadores);

            switch (jugadores)
            {
            case 2:
            printf("VAMOS A JUGAR\n");
            break;
            case 3:
            printf("VAMOS A JUGAR\n");
            break;
            case 4:
             printf("VAMOS A JUGAR\n");
            break;
            default:
            printf("Número de jugadores no válido, escriba uno del 2 al 4.\n");
            break;
            }

            printf("Escribe el nombre del jugador 1: ");
            scanf("%s",nombre1);
            _strupr (nombre1);
            printf("JUGADOR 1 %s\n",nombre1);
            printf("Escribe el nombre del jugador 2: ");
            scanf("%s",nombre2);
            _strupr (nombre2);
            printf("JUGADOR 2 %s\n",nombre2);
            printf("Escribe el nombre del jugador 3: ");
            scanf("%s",nombre3);
            _strupr (nombre3);
            printf("JUGADOR 3 %s\n",nombre3);
            printf("Escribe el nombre del jugador 4: ");
            scanf("%s",nombre4);
            _strupr (nombre4);
            printf("JUGADOR 4 %s\n",nombre4);



           return 0;
}
