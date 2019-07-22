    /*Nombre Equipo: Picateclas
	Autores:
	Dur�n Matos Juan Jos�
	Gonz�lez Bautista No� Alejandro
	L�pez Madera Fernanda Jacqueline
	Version: 1.0
	Descripci�n del programa: Una Compa��a efect�a c�lculos para su reporte 
    anual de utilidades y a�adir� un peque�o incentivo dependiendo de la 
	antig�edad para sus empleados que consiste en un porcentaje de su sueldo, se
    leeran el nombre, la antig�edad y sueldo de cada uno de los 100 empleados y 
    que calculara e imprimira la cantidad que le corresponde a cada uno.
	Fecha de creacion: 9/feb/2019
	*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float sueldo;
	char nombre[40];
	int Antiguedad;
	
	int NoEmpleados = 100;
	//Aqui se calcular� el sueldo de cada uno de los 100 empleados
	for(int contEmp = 0; contEmp<NoEmpleados; contEmp++){
		
		printf("Ingrese el nombre del empleado\n");
		scanf("%s", nombre);
		printf("Ingrese el sueldo ganado del empleado\n");
		scanf("%f", &sueldo);
		printf("Ingrese cuantos a�os de antig�edad ha trabajado\n");
		scanf("%d", &Antiguedad);
		
		//Aqui determinar� e imprimir� el sueldo final que le pertenece al empleado actual
		if(Antiguedad>=1 && Antiguedad<=3){
			sueldo = sueldo + sueldo*0.01;
		}
		else if(Antiguedad>=4 && Antiguedad<=6){
			sueldo = sueldo + sueldo*0.03;
		}
		else if(Antiguedad>=7 && Antiguedad<=9){
			sueldo = sueldo + sueldo*0.05;
		}
		else if(Antiguedad>=10 && Antiguedad<=15){
			sueldo = sueldo + sueldo*0.07;
		}
		else{
			sueldo = sueldo;
		}
		
		printf("\nEl sueldo que ha ganado el empleado %s es de: %f", nombre, sueldo);
		printf("\nPulse una tecla para continuar");
		getch();
		
		system("cls"); //Limpia la consola para seguir con el siguiente empleado
		
	} //Cuando el contador llegue a 100 termina el ciclo y finaliza el programa
	
	return 0;
}

/* Revisi�n.
-No compila.

revis�: Programadores empedernidos */

/*Juan Duran observ�: Que raro, he ejecutado el c�digo en 2 compiladores (zinjai
y C4droid) y me compilan correctamente, es posible que el compilador que utilizan
tenga problemas con ciertas librerias
*/
