#include <stdio.h>
#include <stdlib.h>

int main()
{

	void *p1=malloc(sizeof(char));

		if (p1==NULL)
				printf("Error la memoria dinámica está llena\n");
		else
			{
				printf("se asignó correctamente p1\n");
			}

	free(p1);

return 0;
}
