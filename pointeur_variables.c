#include <stdio.h>
#include <stdlib.h>



int main()
{
	int mon_int = 12;
	char mon_char = 'A';

	//on utilise plutot l'Hexadicimale pour représenter l'adresse
	printf("mon int = %d, adresse = %p\n", mon_int, &mon_int);	
	

	// on utilise Hexadicimale pour représenter l'adresse
	printf("mon char = %c, adresse = %p\n", mon_char, &mon_char);	


	return 0;
}