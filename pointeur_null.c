#include <stdio.h>
#include <stdlib.h>



int main()
{
	short var = 123;
	//short*  p_var = NULL;	//pointeur non valide
	short*  p_var = &var;	//pointeur valide

	printf("ma variable = %ld\n", var);


if (p_var == NULL)

{
	printf("Pointeur null !\n");	//pointeur non valide
}
else
{
	printf("ma variable = %ld\n", *p_var);	//pointeur valide
}




	return 0;
}