/*Programa: Hamburguesas.C
Descripci�n: Determina cu�nto debe pagar cada uno de los N clientes que llegan al establecimiento. 
Tambi�n, al final del d�a, imprime el monto total de las ventas y el total de las comisiones por tarjeta de cr�dito.
Autor: Picateclas
Fecha: 17/02/2019
Versi�n: 1.0
*/

#include <stdio.h>
#include <conio.h>

//Constantes 
#define s 60
#define d 80
#define t 100
#define FOR_V(A,B) for(A=0; A<B; A++)

int main(void) {
	//Variables
	float subtotal, total, mventa, mcomision, c;
	int simple, doble, triple, n, i, pago;
	char metpago;
	c= 0.03;
	subtotal=0;
	total=0;
	mventa=0;
	mcomision=0;
	
	//Entrada. �Cu�ntos clientes son?
	do{
	printf("Ingrese el n�mero de clientes del d�a: ");
	scanf(" %d", &n);
	if(n<0){
		printf("Cantidad inv�lida. Ingrese un n�mero entero positivo o 0. \n");
	}
	}while(n<0);
	
	FOR_V(i,n){
		//Entrada. �Cu�l es el pedido?
		do{
			printf("\n\n�Qu� desea ordenar el cliente?\n");
			printf("Hamburguesa(s) sencilla(s): ");
			scanf(" %d", &simple);
			if(simple<0){
			printf("Cantidad inv�lida. Ingrese un n�mero positivo o 0. \n");
			}
		}while(simple<0);
		do{
			printf("\nHamburguesa(s) doble(s): ");
			scanf(" %d", &doble);
			if(doble<0){
			printf("Cantidad inv�lida. Ingrese un n�mero positivo o 0. \n");
			}
		}while(doble<0);
		do{
			printf("\nHamburguesa(s) triple(s): ");
			scanf(" %d", &triple);
			if(triple<0){
			printf("Cantidad inv�lida. Ingrese un n�mero positivo o 0. \n");
			}
		}while(triple<0);
		
		//Proceso. Empieza a calcular seg�n la cantidad ordenada y su costo.
		subtotal=0;
		if(simple>0){
			subtotal += simple*s;
		}
		if(doble>0){
			subtotal += doble*d;
		}
		if(triple>0){
			subtotal += triple*t;
		}
		
		//Proceso. Determina el m�todo de pago y apllica comisi�n, en caso necesario.
		do{
			printf("\n�C�mo desea pagar? [Efectivo(E) o Tarjeta (T)]: ");
			scanf(" %c", &metpago);
			switch(metpago){
				case 'E':
				case 'e':
					pago=1;
					total= subtotal;
					break;
				case'T':
				case 't':
					pago=1;
					mcomision+= subtotal*c;
					total= subtotal*(1+c);
					break;
				default:
					pago=0;
					printf("M�todo inv�lido. Ingrese de nuevo.\n");
					break;
			}
		}while(pago<1);
		
		//Proceso. Guarda el total del cliente en un acumulador, para obtener las ventas totales del d�a.
		mventa += total;
		//Salida. Imprime el total del cliente
		printf("\nEl total al pagar es: %.2f", total);
	}
	//Salida. Imprime el total de ventas del d�a. Seguido, imprime la sumatoria de la comisi�n aplicada en cada venta.
	printf("\n\nTotal de ventas del d�a (incluyendo comisiones): $%.2f", mventa);
	printf("\nTotal de comisiones del d�a: $%.2f", mcomision);
	getch();
	return 0;
}


/*Revisi�n:
-El c�digo cumple con su funci�n.
-No se imprimen los acentos.
-Las variables tienen nombres representativos.

Revis�: Programadores Empedernidos.
*/

/*Picateclas: Probamos el programa y los acentos s� se imprimen. Suponemos que est�n usando un 
compilador no compatible, mal configurado o usa un encoding diferente*/
