#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 *  Compile with : gcc -m32 -ggdb -o exemple1 exemple1.c
 */


int bss1; 					  /* Bss Segment */
int ds1 = 10;					/* stored in Data Segment */

int main(int argc, char *argv[]) {

	static int bss2; 			    /* Bss Segment */
	static int ds2 = 100; 		/* Data Segment */
	int stack = 200;			    /* stack var */
	char *heap = malloc(10);	/* heap var */

	return 0;
}
