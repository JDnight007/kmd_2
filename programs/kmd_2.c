/* =====  Imports  ===== */
#include <stdio.h>
#include <stdlib.h>








/* =====  Defined : Constants  ===== */
#define REGISTERS 16
#define FETCH_LENGTH 256








/* =====  Defined : Macros  ===== */
#define MemoryAllocation(p,n)						\
	do {								\
		if(!(*(p) = malloc((n) * sizeof **(p)))) {		\
			printf("Error : allocating memory\n");		\
		}							\
	} while(0)








/* =====  Structs & Data Types  ===== */
typedef struct Branch {
	char *BranchName;
	int  *OperationIndex;
} Branch;








/* =====  Function Declarations  ===== */
int SanityCheck_SOURCE_FILE	(FILE **fp, char *filename);
int SanityCheck_FLAGS		(char **flags);








/* =====  main Function  ===== */
/* Command Line Input   :   "$ ./kmd_2 hello.s"   :   argv[n-1]=SOURCE   :   argv[1...n-2]=FLAGS */
int main(int argc, char **argv)
{
	/* ----- Variable Declaration ----- */
	FILE *fp;
	int *r;
	char *line, *sp;



	/* ----- Memory Allocation ----- */
	MemoryAllocation(&r,	REGISTERS);
	MemoryAllocation(&line,	FETCH_LENGTH);
	MemoryAllocation(&sp,	FETCH_LENGTH);



	/* ----- Sanity Checks ----- */
	if(SanityCheck_SOURCE_FILE(&fp, argv[argc - 1]))	return 1;



	/* ----- File Reading ----- */
	while((*sp = fgets(line, 256, fp) != NULL)) {
		printf("R15:%d\t|\t%s", r[15], line);
		r[15]++;
	}



	/* ----- <TDB> ----- */
	/* ... */



	/* ----- Program Termination ----- */
	return 0;
}








/* =====  Function Definitions  ===== */

/* ----- Sanity Checks ----- */
int SanityCheck_SOURCE_FILE	(FILE **fp, char *filename)
{
	/* --- Check : Exists --- */
	if(!(*fp = fopen(filename, "r"))) {
		printf("Error : cannot access provided file / file does not exist.\n");
		return 1;
	}

	return 0;
}
int SanityCheck_FLAGS		(char **flags)
{
	return 0;
}
