#include <math.h>
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)<(b))?(a):(b))
extern long dadt_counter;
extern double InfusionRate[99];
extern double *par_ptr;
extern double podo;
extern double tlast;

// prj-specific differential eqns
void RxODE_mod_mod_dydt(unsigned int neq, double t, double *__zzStateVar__, double *__DDtStateVar__)
{
double
	CC,
	centr,
	V,
	CL;

	V = par_ptr[0];
	CL = par_ptr[1];

	centr = __zzStateVar__[0];

	CC = centr / V;
	__DDtStateVar__[0] = InfusionRate[0] + -( CL / V) * centr;
    dadt_counter++;
}

// prj-specific derived vars
void RxODE_mod_mod_calc_lhs(double t, double *__zzStateVar__, double *lhs) {
double
	CC,
	centr,
	V,
	CL;

	V = par_ptr[0];
	CL = par_ptr[1];

	centr = __zzStateVar__[0];

	CC = centr / V;

	lhs[0]=CC;
}
