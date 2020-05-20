#include <stdio.h>
#include <stdlib.h>
typedef struct fecha
{
	int dia;
	int mes;
	int anio;
}fecha_t;


fecha_t* crear_fecha()
{
	fecha_t* nueva_fecha=malloc(sizeof(fecha_t));
		if(!nueva_fecha)
			printf("No hay espacio\n");

		fflush(stdin);
		printf("ingrese el día: \n");
		scanf("%d",&nueva_fecha->dia);

		fflush(stdin);
                printf("ingrese el mes: \n");
                scanf("%d",&nueva_fecha->mes);

		fflush(stdin);
                printf("ingrese el año: \n");
                scanf("%d",&nueva_fecha->anio);

return nueva_fecha;

}

void imprimir_fecha(fecha_t* fecha_a_imprimir)
{
	printf("dia: %d ,mes: %d, año: %d\n",fecha_a_imprimir->dia,fecha_a_imprimir->mes,fecha_a_imprimir->anio); 
	return;
}


int main (){
	fecha_t* fecha1=crear_fecha();
	imprimir_fecha(fecha1);
	

return 0;
}
