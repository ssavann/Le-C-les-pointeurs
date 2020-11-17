#include <stdio.h>
#include <stdlib.h>



int main()
{
	//lorsqu'on pointe à la mauvaise zone de mémoire, le programme ne crashera pas, mais donnera de fausse valeur

	int age = 25, taille = 178;
	int* p_int = 0;
	p_int = &taille;	//ici au lieu de pointer à l'adresse "age" on pointe ver "taille"

	printf("Donnez votre age: ");
	scanf("%d\n", p_int);

	printf("Vous avez %d ans\n", age);	//le fait qu'on a pas modifier "age", age va rester le meme, car on s'est trompé de variable dans le "scanf"




	return 0;
}