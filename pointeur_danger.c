#include <stdio.h>
#include <stdlib.h>



int main()
{
	long var = 65321;
	short*  p_var = &var;

	printf("ma variable = %ld\n", var);



	//le fait que j'ai mis un "short", il va juste m'afficher 2 cases de la mémoire au lieu de 4 cases puisqu'un "long" comporte 4 cases
	//il suffit donc de changer ma déclaration a un "long" au lieu de "short"
	printf("ma variable = %ld\n", *p_var);	 



	return 0;
}