#include <stdio.h>
#include <stdlib.h> 
#include "func.h" 

int main(int argc, char *argv[]) {
	int x, y;
	if (argc < 3)
		return 1;
	x = strtol(argv[1], NULL, 10);
	y = strtol(argv[2], NULL, 10);
	printf("%i\n", func(x, y));
	return 0;
}
