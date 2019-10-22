#include "array.h"

double* create1Darray(int size)
{
	double* newArray = (double*)malloc(size * sizeof(double));
	return newArray;
}

void 	destroy1Darray(double* field)
{
	free(field);
}
