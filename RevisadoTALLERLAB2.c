/*II. Un restaurante ofrece hamburguesas sencillas, dobles y triples, 
las cuales tienen un costo de $60.00, $80.00 y $100.00, respectivamente. 
La empresa acepta tarjetas de cr�dito con un cargo adicional de 3% sobre la 
compra. Los clientes pueden hacer su pedido con cualquier cantidad de
hamburguesas de los tipos que deseen comer.  E.P. para determinar cu�nto
debe pagar cada uno de los N clientes que llegan al establecimiento. 
Tambi�n, al final del d�a, se requiere imprimir el monto total de las ventas 
y el total de las comisiones por tarjeta de cr�dito. Utilizar s�lo estructuras
repetitivas for*/

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
	int S,D,T, NoCliente, B, NH, Tipo, cont;
	float ITC, Pago, Ventas, ComisionesT;
	
	S=60;
	D=80;
	T=100;
	ITC=.03;
	Ventas=0;
	ComisionesT=0;
	
	printf("Bienvenido a Hamburguer Store, �Cuantos clientes tendra? ");
	scanf ("%d", &NoCliente);
	for(B=1; B<=NoCliente; B++)
	{
		Pago=0;	
		printf("\n �Cu�ntas hamburguesas simples quiere?: ");
		scanf ("%d", &NH);	
		Pago=Pago+(S*NH);
		printf("\n �Cu�ntas hamburguesas dobles quiere?: ");
		scanf ("%d", &NH);
		Pago=Pago+(D*NH);
		printf("\n �Cu�ntas hamburguesas triples quiere?: ");
		scanf ("%d", &NH);		
		Pago=Pago+(T*NH);	
		printf("\n �Pagara con tarjeta de credito? (1-S�, 2-No): ");
		scanf ("%d", &Tipo);	
		system("cls");
		switch (Tipo){
		case 1:
			Pago=Pago+(Pago*ITC);
			ComisionesT=ComisionesT+(Pago*ITC);
			printf("\n El total al pagar de tu cliente es de (Incluye IVA): %f", Pago);
			break;
		default: printf("\n El total al pagar de tu cliente es de: %f", Pago);
		}
		Ventas=Ventas+Pago;
	}
	printf("\n\n Sus ventas totales fueron de: %f", Ventas);
	printf("\n\n Sus ComisionesT fueron de: %f", ComisionesT);
	return 0;
}

/*El programa funciona correctamente. NO est� documentado el c�digo y no se entiende el funcionamiento de algunas variables
Falta informaci�n en el encabezado (nombres, equipo, fecha, versi�n)
Recomendaci�n: Separar el c�digo para que sea m�s f�cil entenderlo

Revis�: Senaida Norely Chan Chan

Equipo: SacaChispas

Fecha 19/02/2019 */


