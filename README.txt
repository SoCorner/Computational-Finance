


=================== gsl_rng_type and gsl_rng =============================



The random number generator library uses two special structs, gsl_rng_type which
 holds static information about each type of generator and gsl_rng which describes
 an instance of a generator created from a given gsl_rng_type.


===================== some functions ==================

1. gsl_rng * gsl_rng_alloc(const gsl_rng_type * T) returns a pointer to a newly-
created instance of a random number generator of type.

2. void gsl_rng_free(gsl_rng * r) This function frees all the memory associated with 
the generator r.

3. unsigned long int gsl_rng_get(const gsl_rng * r) returns a random integer from the 
generator r.

4. double gsl_rng_uniform(const gsl_rng * r) returns a double precision floating 
point number uniformly distributed in the range [0,1).

5. double gsl_rng_uniform_pos(const gsl_rng * r) returns a positive double precision 
floating point number uniformly distributed in the range (0,1), excluding both 0.0 
and 1.0.

6. unsigned long int gsl_rng_uniform_int(const gsl_rng * r, unsigned long int n)
This function returns a random integer from 0 to n-1 inclusive by scaling down 
and/or discarding samples from the generator r.

7. 