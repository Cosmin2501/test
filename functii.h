#ifndef FUNCTII_H_
#define FUNCTII_H_

struct MENU_ITEM {
	char*nume;
	double (*f) (double a, double b, unsigned int n, double (*)(double));
};
int menu(struct MENU_ITEM meniu[],unsigned int nf, char *msg);
double f(double);
double integralaTr(double a,double b, unsigned int n, double (*pf)(double));
double integralaDr(double a,double b, unsigned int n, double (*pf)(double));
double integralaSm(double a,double b, unsigned int n, double (*pf)(double));
#endif
