/* =====  Imports  ===== */
#include <stdio.h>
#include <stdlib.h>








/* =====  Defined : Constants  ===== */
#define REGISTERS 16








/* =====  Defined : Macros  ===== */
#define MemoryAllocation(p,n)						\
	do {								\
		if(!(*(p) = malloc((n) * sizeof **(p)))) {		\
			printf("Error : allocating memory\n");		\
		}							\
	} while(0)








/* =====  Structs & Data Types  ===== */
/* ... */








/* =====  Function Declarations  ===== */
int SanityCheck_SOURCE_FILE	(char *filename);
int SanityCheck_FLAGS		(char *flags);








/* =====  main Function  ===== */
/* Command Line Input   :   "$ ./kmd_2 hello.s"   :   argv[n-1]=SOURCE   :   argv[1...n-2]=FLAGS */
int main(int argc, char **argv)
{
	/* ----- Variable Declaration ----- */
	int *r;



	/* ----- Memory Allocation ----- */
	MemoryAllocation(&r,REGISTERS);


	/* ----- <TDB> ----- */
	/* ... */



	/* ----- <TDB> ----- */
	/* ... */



	/* ----- Program Termination ----- */
	return 0;
}








/* =====  Function Definitions  ===== */

/* ----- Sanity Checks ----- */
int SanityCheck_SOURCE_FILE	(char *filename)
{
	return 0;
}
int SanityCheck_FLAGS		(char **flags)
{
	return 0;
}
