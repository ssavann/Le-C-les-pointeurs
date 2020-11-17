#include <stdio.h>
#include <stdlib.h>



int main()
{
	short* p_var = 0;
	


if (p_var == NULL)

{
	short var = 123;
	p_var = &var;
	printf("Ma variable = %d\n", *p_var);	
}

	//la mémoire se vide lorsque ça sort du "if", alors l'adresse pointe vers un vide

	printf("ma variable = %d\n", *p_var);	





	return 0;
}