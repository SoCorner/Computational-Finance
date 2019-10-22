#include "output.h"

void OUTPUT_1D(double* series, int quantity, char* fileName)
{
	printf("outputing...\n");
	char* file = malloc(255 * sizeof(char*));
	sprintf(file, "%s.txt", fileName);
	FILE* data;
	data = fopen(file, "a");

	if (data == NULL) {
		printf("Error during opening the document!\n");
	}

	for (int i = 0; i < quantity; i++) {
		fprintf(data, "%lf\n", series[i]);
	}
	fclose(data);

	printf("Output completed, now you can check your %s.txt.\n", fileName);
}
