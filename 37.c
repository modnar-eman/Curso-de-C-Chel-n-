#include <stdio.h>

int main()
{
	char vector_caracteres[]="Soy la vieja manera";
	printf("%s\n",vector_caracteres);


char* cad = "YouTube";
printf("%s\n",cad);

char * cad2;
cad2=&vector_caracteres[0];
printf("%s\n",cad2);

char* cad3;

cad3=vector_caracteres;
printf("%s\n",cad3);

return 0;
} 
