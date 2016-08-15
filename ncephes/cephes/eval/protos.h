/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 *
 *   Created: Fri Mar 31 19:17:33 1995
 */
extern double acosh ( double x );
extern int airy ( double, double *, double *, double *, double * );
extern double asin ( double );
extern double acos ( double );
extern double asinh ( double x );
extern double atan ( double );
extern double atan2 ( double y, double x );
extern double atanh ( double );
extern double bdtrc ( int k, int n, double p );
extern double bdtr ( int k, int n, double p );
extern double bdtri ( int k, int n, double y );
extern double beta ( double a, double b );
extern double lbeta ( double a, double b );
extern double btdtr ( double a, double b, double x );
extern double cbrt ( double );
extern double chbevl ( double, void *, int );
extern double chdtrc ( double df, double x );
extern double chdtr ( double df, double x );
extern double chdtri ( double df, double y );
extern void clog ( cmplx *z, cmplx *w );
extern void cexp ( cmplx *z, cmplx *w );
extern void csin ( cmplx *z, cmplx *w );
extern void ccos ( cmplx *z, cmplx *w );
extern void ctan ( cmplx *z, cmplx *w );
extern void ccot ( cmplx *z, cmplx *w );
extern void casin ( cmplx *z, cmplx *w );
extern void cacos ( cmplx *z, cmplx *w );
extern void catan ( cmplx *z, cmplx *w );
extern void cadd ( cmplx *a, cmplx *b, cmplx *c );
extern void csub ( cmplx *a, cmplx *b, cmplx *c );
extern void cmul ( cmplx *a, cmplx *b, cmplx *c );
extern void cdiv ( cmplx *a, cmplx *b, cmplx *c );
extern void cmov ( void *a, void *b );
extern void cneg ( cmplx *a );
extern double ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_cabs ( cmplx *z );
extern void ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_ncephes_csqrt ( cmplx *z, cmplx *w );
extern double hypot ( double, double );
extern double cosh ( double );
extern double dawsn ( double xx );
extern void eigens ( double A[], double RR[], double E[], int N );
extern double ellie ( double, double );
extern double ellik ( double, double );
extern double ellpe ( double );
extern int ellpj ( double u, double m, double *sn, double *cn, double *dn, double *ph );
extern double ellpk ( double );
extern double exp10 ( double );
extern double exp1m ( double );
extern double exp2 ( double );
extern double expn ( int n, double x );
extern double fac ( int i );
extern double fdtrc ( int ia, int ib, double x );
extern double fdtr ( int ia, int ib, double x );
extern double fdtri ( int ia, int ib, double y );
extern int fftr ( double x[], int m0, double sine[] );
extern double ceil ( double x );
extern double fabs ( double );
extern double floor ( double );
extern double frexp ( double, int * );
extern double ldexp ( double, int );
extern int signbit ( double );
extern int isnan ( double );
extern int isfinite ( double );
extern double polevl ( double, void *, int );
extern double p1evl ( double, void *, int );
extern double exp ( double );
extern double log ( double );
extern double sin ( double );
extern double cos ( double );
extern double sqrt ( double );
extern int fresnl ( double xxa, double *ssa, double *cca );
extern double gamma ( double );
extern double lgam ( double );
extern double gdtr ( double a, double b, double x );
extern double gdtrc ( double a, double b, double x );
extern int gels ( double A[], double R[], int M, double EPS, double AUX[] );
extern double hyp2f1 ( double a, double b, double c, double x );
extern double hyperg ( double, double, double );
extern double hyp2f0 ( double a, double b, double x, int type, double *err );
extern double i0 ( double );
extern double i0e ( double x );
extern double i1 ( double );
extern double i1e ( double x );
extern double igamc ( double, double );
extern double igam ( double, double );
extern double igami ( double, double );
extern double incbet ( double, double, double );
extern double incbi ( double, double, double );
extern double iv ( double v, double x );
extern double j0 ( double );
extern double y0 ( double );
extern double j1 ( double );
extern double y1 ( double );
extern double jn ( int n, double x );
extern double jv ( double, double );
extern double k0 ( double x );
extern double k0e ( double x );
extern double k1 ( double x );
extern double k1e ( double x );
extern double kn ( int nn, double x );
extern int levnsn ( int n, double r[], double a[], double e[], double refl[] );
extern double log10 ( double );
extern double log2 ( double );
extern long lrand ( void );
extern long lsqrt ( long x );
extern int minv ( double A[], double X[], int n, double B[], int IPS[] );
extern int mmmpy ( int r, int c, double *A, double *B, double *Y );
extern int mtherr ( char *name, int code );
extern int mtransp ( int n, double *A, double *T );
extern int mvmpy ( int r, int c, double *A, double *V, double *Y );
extern double nbdtrc ( int k, int n, double p );
extern double nbdtr ( int k, int n, double p );
extern double nbdtri ( int k, int n, double p );
extern double ndtr ( double a );
extern double erfc ( double );
extern double erf ( double );
extern double ndtri ( double );
extern double pdtrc ( int k, double m );
extern double pdtr ( int k, double m );
extern double pdtri ( int k, double y );
extern double pow ( double, double );
extern double powi ( double, int );
extern double psi ( double );
extern void revers ( double y[], double x[], int n );
extern double rgamma ( double x );
extern double round ( double );
extern int sprec ( void );
extern int dprec ( void );
extern int ldprec ( void );
extern int shichi ( double x, double *si, double *ci );
extern int sici ( double x, double *si, double *ci );
extern double simpsn ( double f[], double delta );
extern int simq ( double A[], double B[], double X[], int n, int flag, int IPS[] );
extern double radian ( double d, double m, double s );
/*
extern int sincos ( double x, double *s, double *c, int flg );
*/
extern double sindg ( double x );
extern double cosdg ( double x );
extern double sinh ( double );
extern double spence ( double );
extern double stdtr ( int k, double t );
extern double stdtri ( int k, double p );
extern double onef2 ( double a, double b, double c, double x, double *err );
extern double threef0 ( double a, double b, double c, double x, double *err );
extern double struve ( double v, double x );
extern double tan ( double );
extern double cot ( double );
extern double tandg ( double x );
extern double cotdg ( double x );
extern double tanh ( double );
extern double log1p ( double );
extern double exmp1 ( double );
extern double cosm1 ( double x );
extern double yn ( int, double );
extern double zeta ( double x, double q );
extern double zetac ( double );
extern int drand ( double *a );
double smirnov ( int, double );
double smirnovi ( int, double );
double kolmogorov ( double );
double kolmogi ( double );

/* polyn.c */
extern void polini ( int maxdeg );
extern void polprt ( double a[], int na, int d );
extern void polclr ( double *a, int n );
extern void polmov ( double *a, int na, double *b );
extern void polmul ( double a[], int na, double b[], int nb, double c[] );
extern void poladd ( double a[], int na, double b[], int nb, double c[] );
extern void polsub ( double a[], int na, double b[], int nb, double c[] );
extern int poldiv ( double a[], int na, double b[], int nb, double c[] );
extern void polsbt ( double a[], int na, double b[], int nb, double c[] );
extern double poleva ( double a[], int na, double x );
/* polmisc.c */
extern void polatn ( double num[], double den[], double ans[], int nn );
extern void polsqt ( double pol[], double ans[], int nn );
extern void polsin ( double x[], double y[], int nn );
extern void polcos ( double x[], double y[], int nn );
