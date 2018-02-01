#include <stdio.h>

/*Печать таблицы температур*/

int main(int argc, char ** argv) {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step  = 20;
	
	celsius = upper;
	
	printf("Таблица перевода из fahr в cels\n");
	
	while (celsius >= lower) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("cels: %7.3f\tfahr: %7.3f\n", celsius, fahr);
		celsius -= step;
	}
}	
