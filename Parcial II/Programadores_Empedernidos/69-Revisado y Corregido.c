/*Pedir al usuario el n�mero de elementos para un arreglo de n�meros enteros, posteriormente
comprobar con malloc si hay memoria suficiente (si el puntero es v�lido, es decir diferente de NULL), si la hay,
entonces leer y luego imprimir dicho arreglo; si no, indicar un error en la asignaci�n de memoria.

Autor: Programadores Empedernidos. Fecha: 31/03/19. Versi�n: 1.0
*/
#include <stdio.h>
#include <malloc.h>
#include<conio.h>
#include<windows.h>

void color(char color);
void pantallaInicio();

int main(){
	int *p_array,n,i;
	//comienzo de la Pantalla de inicio
    pantallaInicio();
    
    printf("\nPrograma: Comprobar si hay memoria suficiente");
    printf("\nDescripcion: Pedir al usuario el numero de elementos para un arreglo de numeros enteros, posteriormente comprobar con malloc si hay memoria suficiente (si el puntero es valido, es decir diferente de NULL), si la hay, entonces leer y luego imprimir dicho arreglo; si no, indicar un error en la asignacion de memoria.\n\n");

    system("pause"); system("cls");
    //fin de la pantalla de inicio
	
	do{
		printf("Digite el total de elementos del array: ");
		scanf("%d", &n);
	
		p_array = (int*)malloc(n*sizeof(int));
		
		if(p_array == NULL){
			printf("Error en la Asignacion de memoria\n\n");
		}
	}
	while(p_array == NULL);

	for(i=0; i<n; i++){
		printf("\n\nIngrese el valor del elemento no. %d>  ", i+1); //salida de datos.
		scanf("%d", &p_array[i]);
	}
	printf("\nVector resultante:\n");
	for(i=0; i<n; i++){
		printf("[%d] ", p_array[i]);
	}	

	return 0;
}

void color(char color){
	HANDLE cambioDeColor;
	cambioDeColor = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(cambioDeColor, color);
}
void pantallaInicio(){
    color(5);
    printf(" ______                                             _\n(_____ \\                                           | |\n _____) )___ ___   ____  ____ _____ ____  _____  __| | ___   ____ _____  ___\n|  ____/ ___) _ \\ / _  |/ ___|____ |    \\(____ |/ _  |/ _ \\ / ___) ___ |/___)\n| |   | |  | |_| ( (_| | |   / ___ | | | / ___ ( (_| | |_| | |   | ____|___ |\n|_|   |_|   \\___/ \\___ |_|   \\_____|_|_|_\\_____|\\____|\\___/|_|   |_____|___/\n                 (_____| \n");
    color(13);
	printf("     _______                       _                   _     _\n    (_______)                     | |                 (_)   | | \n     _____   ____  ____  _____  __| |_____  ____ ____  _  __| | ___   ___\n    |  ___) |    \\|  _ \\| ___ |/ _  | ___ |/ ___)  _ \\| |/ _  |/ _ \\ /___) \n    | |_____| | | | |_| | ____( (_| | ____| |   | | | | ( (_| | |_| |___ |\n    |_______)_|_|_|  __/|_____)\\____|_____)_|   |_| |_|_|\\____|\\___/(___/\n                  |_|\n");
	color(7);
}


/*Revis�: Picateclas
-El programa funciona correctamente.
-Uso de variables representativas.
-C�digo f�cil de entender.
-Fue un buen detalle a�adir pantalla de inicio y la descripci�n del problema.
-No es un error, pero ser�a mejor que en caso de no poder asignar la memmoria, 
se le pida al usuario ingresar otro tama�o en vez de solo terminar el proceso.
*/
