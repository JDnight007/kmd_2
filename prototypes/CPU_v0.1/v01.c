/* =====  Imports / Libraries  ===== */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>








/* =====  Function Declarations  ===== */

/* --- Memory Allocation --- */
int mem_alloc(void **p, size_t byt, int n);








/* =====  main Function  ===== */
int main(int argc, char **argv)
{
	/* --- Variable Declaration ---- */
	int *acc;
	char **instr;



	/* --- Memory Allocation --- */
	mem_alloc((void **)&acc, sizeof(int), 1);



	/* --- <TBD> --- */
	*acc = 32;
	printf("%d\n", *acc);
	*acc = 32;
	printf("%d\n", *acc);



	/* --- <TBD> --- */
	/**/



	/* --- <TBD> --- */
	/**/



	/* --- Free Memory --- */
	free(acc);



	/* --- Program Termination --- */
	return 0;
}








/* =====  Function Definitions  ===== */

/* ----- Memory Allocation ----- */
int mem_alloc(void **p, size_t byt, int n)
{
	*p = malloc(byt * n);
	if (*p == NULL) {
		printf("Error : allocating memory at %p, for %d bytes.\n", *p, (int)byt * n);
		return 1;
	}
	return 0;
}

/* ----- get Functions ----- */
/**/
