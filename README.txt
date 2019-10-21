


=================== gsl_rng_type and gsl_rng =============================



The random number generator library uses two special structs, gsl_rng_type which
 holds static information about each type of generator and gsl_rng which describes
 an instance of a generator created from a given gsl_rng_type.


========================== Uniform Distribution ==================================

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

========================== Gaussian Distribution ==================================

1. double gsl_ran_gaussian(const gsl_rng * r, double sigma) This function returns a 
Gaussian random variate, with mean zero and standard deviation sigma.

2. double gsl_ran_gaussian_pdf(double x, double sigma) This function computes the pro-
bability density p(x) at x for a Gaussian distribution with standard deviation sigma, 
using the formula given above.

3. double gsl_ran_ugaussian(const gsl_rng * r)
double gsl_ran_ugaussian_pdf(double x)
double gsl_ran_ugaussian_ratio_method(const gsl_rng * r)

These functions compute results for the unit Gaussian distribution. They are equival-
ent to the functions above with a standard deviation of one, sigma = 1.

4. double gsl_cdf_gaussian_P(double x, double sigma)
double gsl_cdf_gaussian_Q(double x, double sigma)
double gsl_cdf_gaussian_Pinv(double P, double sigma)
double gsl_cdf_gaussian_Qinv(double Q, double sigma)

These functions compute the cumulative distribution functions P(x), Q(x) and their i-
nverses for the Gaussian distribution with standard deviation sigma.

5. double gsl_cdf_ugaussian_P(double x)
double gsl_cdf_ugaussian_Q(double x)
double gsl_cdf_ugaussian_Pinv(double P)
double gsl_cdf_ugaussian_Qinv(double Q)

These functions compute the cumulative distribution functions P(x), Q(x) and their i-
nverses for the unit Gaussian distribution.


