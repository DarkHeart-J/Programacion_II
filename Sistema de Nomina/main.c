#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("\t\tSistema de Nomina\n\n");
	printf("1. Recibos\n");
	printf("2. Documentos personalizados\n");
	printf("3. Tablas\n");
	printf("4. Operaciones basicas\n");
	printf("5. Impuestos\n");
	printf("6. Hoja de calculo\n");
	printf("7. Graficas\n");
	printf("8. Movimientos afiliatorios al IMSS\n");
	printf("9. Impresion\n");
	printf("10. Salir\n");
	
	int opcion;
	
	printf("Introduce un numero del 1 al 10: ");
	scanf("%d", & opcion);
	
	switch(opcion){
		case 1:
			printf("\nGeneracion de recibos.");
			break;
		case 2:
			printf("\nPersonaliza tu documento.");
			break;
		case 3:
			printf("\nGenera una tabla.");
			break;
		case 4:
			printf("\nRealiza las operaciones basicas.");
			break;
		case 5:
			printf("\nDeduccion de impuestos.");
			break;
		case 6:
			printf("\nGenera una hoja de calculo.");
			break;
		case 7:
			printf("\nGenera graficas.");
			break;
		case 8:
			printf("\nMovimientos afiliatorios al IMSS.");
			break;
		case 9:
			printf("\nImprime tu documento.");
			break;
		case 10:
			printf("\nSalir.");
			break;
	}
	
	return 0;
}
