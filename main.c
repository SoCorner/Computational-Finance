#include"array.h"
#include"output.h"
#include"rejectionSampling.h"
#include<stdio.h>
#include<gsl/gsl_rng.h>

void main() 
{
	int size = 100;
	double* output = create1Darray(size);
	char* fileName = "test";
	for (int i = 0; i < size; i++) {
		output[i] = 0;
	}
	OUTPUT_1D(output, size, fileName);
}