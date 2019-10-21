#include<stdio.h>
#include<gsl/gsl_rng.h>
void main() 
{
	printf("hello computational finance!\n");
	// construct a new instance for random number generator
	gsl_rng* r;
	// r is a mt19937 random number generator
	r= gsl_rng_alloc(gsl_rng_mt19937);
	printf("r is a %s generator\n", gsl_rng_name(r));
	printf("the maximum of r is %d\n", gsl_rng_min(r));
	printf("%lf\n", (double)rand()/RAND_MAX);
	printf("that was good\n");
	//generate a random number, which is uniform distributed.
	printf("%lf\n", gsl_rng_uniform(r));
	gsl_rng_free(r);
	return 0;
}