#include <stdio.h>
#include <stdlib.h>

int main()
{
	void * vector_din=NULL;
	int *vector_convertido=NULL;  
	vector_din=malloc(4*sizeof(int)); //para guardar 4 lugares de tamaño int

		if(vector_din==NULL)
			printf("No se pudo asignar memoria\n");

	vector_convertido=(int*)vector_din;
	vector_convertido[0]=1;
	vector_convertido[1]=2;
	vector_convertido[2]=3;
	vector_convertido[3]=4;

	//relloc para que sean 6 lugares;
	int *vector_din_6_lugares=NULL;
	vector_din_6_lugares=realloc(vector_din, 6*sizeof(int));
		if (vector_din_6_lugares==NULL)
			printf("No se pudo asignar memoria\n");

	vector_convertido=(int*)vector_din_6_lugares;
		printf("El nuevo vector en el 3: %i\n",vector_convertido[3]); 
        vector_convertido[4]=5;
        vector_convertido[5]=6;
	 printf("El nuevo vector en el 4: %i\n",vector_convertido[4]);
	 printf("El nuevo vector en el 5: %i\n",vector_convertido[5]);


return 0;
}
