#include <stdio.h>

struct contacto
{
	char nombre[40];
	char direccion[80];
	int edad;
	long telefono;
};

typedef struct contacto contacto_t;

int main ()
{
	contacto_t c1;

	printf("Ingrese el nombre\n");
	fflush(stdin);
	scanf("%s",&c1.nombre);
	printf("Ingrese la Dirección\n");
	fflush(stdin);
	scanf("%[^\n]s",&c1.direccion);
	printf("Ingrese la edad\n");
	fflush(stdin);
	scanf("%i",&c1.edad);
	printf("Ingrese el teléfono\n");
	fflush(stdin);
	scanf("%d",&c1.telefono);
	printf("\n\n\n");
	printf("Nombre:%s \nDir:%s \nEdad:%d \nTel %d \n", c1.nombre, c1.direccion,c1.edad,c1.telefono);

return 0;
}
