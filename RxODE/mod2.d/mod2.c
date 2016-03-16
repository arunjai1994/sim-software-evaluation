#include <math.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
extern long dadt_counter;
extern double InfusionRate[99];
extern double *par_ptr;
extern double podo;
extern double tlast;

// prj-specific differential eqns
void RxODE_mod_mod2_dydt(unsigned int neq, double t, double *__zzStateVar__, double *__DDtStateVar__)
{
double
	centr,
	WT,
	CRCL,
	age,
	V,
	CC;

	WT = par_ptr[0];
	CRCL = par_ptr[1];
	age = par_ptr[2];
	V = par_ptr[3];

	centr = __zzStateVar__[0];

	__DDtStateVar__[0] = InfusionRate[0] + -(( WT *( 0.67 * CRCL + pow( age, 0.24))) /( 600 * V)) * centr;
	CC = centr / V;
    dadt_counter++;
}

// prj-specific derived vars
void RxODE_mod_mod2_calc_lhs(double t, double *__zzStateVar__, double *lhs) {
double
	centr,
	WT,
	CRCL,
	age,
	V,
	CC;

	WT = par_ptr[0];
	CRCL = par_ptr[1];
	age = par_ptr[2];
	V = par_ptr[3];

	centr = __zzStateVar__[0];

	CC = centr / V;

	lhs[0]=CC;
}
