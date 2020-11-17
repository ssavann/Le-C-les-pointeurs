#include <stdio.h>
#include <stdlib.h>



int main()
{
	int mon_int = 12;
	int prix = 12000;
	char mon_char = 'A';
	int* p_int = 0;			//déclaration du pointeur

	p_int = &mon_int;		//assignation de mon pointeur à p_int

	//représentation en décimale, mais on utilise plutot l'Hexadicimale pour représenter l'adresse
	printf("mon int = %d, adresse = %p\n", mon_int, &mon_int);	
	printf("p_int de mon_int = %p\n", p_int);


	p_int = &prix;	//assignation de mon pointeur à p_int
	printf("p_int de prix = %p\n", p_int);
	//printf("p_int de prix = %p\n", &prix);	//meme chose que "p_int = &prix;"	


	// on utilise Hexadicimale pour représenter l'adresse
	printf("mon char = %c, adresse = %p\n", mon_char, &mon_char);	



	return 0;
}