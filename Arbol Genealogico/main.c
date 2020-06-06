#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("\t\tArbol Genealogico");
	
	printf("\n1 = Generacion 1");
	printf("\n2 = Generacion 2");
	printf("\n3 = Generacion 3");
	printf("\n4 = Generacion 4");
	printf("\n5 = Generacion 5");
	printf("\n6 = Generacion 6");
	
	int generacion;
	
	printf("\nIngresa un numero del 1 al 6: ");
	scanf("%d", & generacion);
	printf("\n");
	
	switch(generacion){
		case 1:
			printf("\tTatarabuelos");
			printf("\nPaternos: ");
			printf("\nPanchita");
			printf("\nPancho");
			printf("\nMaternos: ");
			printf("\nPanchita 2");
			printf("\nPancho 2");
			break;
			
		case 2:
			printf("\tVisabuelos");
			printf("\nPaternos: ");
			printf("\nPanchita 3");
			printf("\nPancho 3");
			printf("\nMaternos: ");
			printf("\nPanchita 4");
			printf("\nPancho 4");
			break;
			
		case 3:
			printf("\tAbuelos");
			printf("\nPaternos: ");
			printf("\nTrinidad");
			printf("\nJorge");
			printf("\nMaternos: ");
			printf("\nBertha");
			printf("\nPablo");
			break;
			
		case 4:
			printf("\tPadres");
			printf("\nRosalba");
			printf("\nJorge");
			break;
			
		case 5:
			printf("\tHermanos");
			printf("\nJonathan");
			printf("\nJair");
			break;
			
		case 6:
			printf("\tHijos");
			printf("\nEl michi uwu");
			break;
	}
	
	return 0;
}
