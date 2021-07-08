#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>





int menu(void)
{

printf("\n¡NUEVA TIENDA ONLINE!");
printf("\n1. CLIENTE NUEVO.");
printf("\n2. LISTA DE CLIENTES.");
printf("\n3. CREAR CATALOGO.");
printf("\n4. VER CATALOGO");
printf("\n5. VENDER.");
printf("\n6. SALIR.");
printf("\nINGRESE OPCIÓN: ");

}

int main()
{

int opcion, opc2, opc3, i = 0, a = 0, n=5, cantidad_producto_vender, pregunta_descuento, descuento;
long nombre_producto_vender;
float precio_producto_vender, total_final, total, descuento_final, sub_total;

long nombre_cliente[50], nombre_producto[50];
float id[50], tel[50], precio_producto[50], codigo[50];




do{
menu();
scanf("%d",&opcion);

switch(opcion)
{
	case 1 :
	i++;
	printf("\nIngrese el nombre del cliente nuevo: ");
	scanf("%s", &nombre_cliente[i]);
	printf("Ingrese el numero de ID del cliente nuevo (Sin espacios ni guiones): ");
	scanf("%d",&id[i]);
	printf("Ingrese el numero de telefono del cliente nuevo (Sin espacios ni guiones): ");
	scanf("%d",&tel[i]);
	printf("\nIngrese 1 para volver al menu y 0 para salir: ");
	scanf("%d",&opc2);
	break;

	case 2 :
		for (i=1; i<n; i++)
		{
			printf("\nNombre de cliente: %c", nombre_cliente[i]);
			printf("Numero de ID de cliente:%d ", id[i]);
			printf("Numero de telefono de cliente: %d", tel[i]);
		}

	printf("\nIngrese 1 para volver al menu y 0 para salir: ");
	scanf("%d", &opc2);
	break;

	case 3 :
	a++;
	printf("\nIngrese el nombre del producto: ");
	scanf("%c", &nombre_producto[a]);
	printf("Ingrese el codigo del producto: ");
	scanf("%d", &codigo[a]);
	printf("Ingrese el precio del producto: ");
	scanf("%d", &precio_producto[a]);
	printf("\nIngrese 1 para volver al menu y 0 para salir: ");
	scanf("%d", &opc2);
	break;

	case 4 :
		for (a=1; a<n; a++)
		{
			printf("\nNombre del producto: ",nombre_producto[a]);
			printf("Codigo del producto: ",codigo[a]);
			printf("Precio del producto: ",precio_producto[a]);
		}

	printf("\nIngrese 1 para volver al menu y 0 para salir: ");
	scanf("%d", &opc2);
	break;

	case 5 :
	printf("\nIngrese el nombre del producto a vender: ");
	scanf("%c", &nombre_producto_vender);
	printf("\nIngrese el precio del producto: ");
	scanf("%f", &precio_producto_vender);
	printf("\nIngrese la cantidad del producto a vender: ");
	scanf("%d", &cantidad_producto_vender);

	total = precio_producto_vender * cantidad_producto_vender;
	sub_total=total;

	printf("\n¿Desea aplicar descuento? (Ingrese 1 para si y 0 para no.)");
	scanf("%f", &pregunta_descuento);
		if (pregunta_descuento == 1)
		{
          printf("\n¿De cuanto es el descuento? (Ingrese el numero del porcentaje de descuento que desea aplicar, ejemplo: ingrese 50 para aplicar un cincuenta por ciento de descuento.)");
		  scanf("%d", &descuento);
		  descuento_final = total * (descuento * 0.01);
		  total_final = total - descuento_final;
		}
		else
		{
		 descuento_final = 0;
		 total_final = total;
		}

	printf("\nProducto vendido:%c ", nombre_producto_vender);
	printf("Precio del producto:%f ", precio_producto_vender);
	printf("Cantidad vendida: %d", cantidad_producto_vender);
	printf("Sub Total:%d ", sub_total);
	printf("Descuento: -%f", descuento_final);
	printf("\nTotal a pagar: %f", total_final);

	printf("\nIngrese 1 para volver al menu y 0 para salir: ");
	scanf("%d", &opc2);
	break;

	case 6 :
	return 0;

	default:
    printf("Ha elegido una opcion invalida.");
	printf("\nIngrese 1 para volver al menu y 0 para salir: ");
	scanf("%d", &opc2);
}
}while(opc2 == 1);

}
