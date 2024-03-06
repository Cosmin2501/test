#include "functii.h"
#include <math.h>
#include <stdio.h>
double f(double x)
{
	double rez=sin(exp(2*x)+3);
	return rez;
}
int menu(struct MENU_ITEM meniu[], unsigned int nf, char *msg)
{
	int opt;
	register unsigned int i;
	puts(msg);
	for(i=0;i<nf;i++)
	{
		printf("\t%d - %s\n",i+1,meniu[i].nume);
	}
	printf("\t0 - exit\n");
	printf("\t >> ");
	scanf("%d",&opt);
	return(opt);
}
double integralaTr(double a, double b, unsigned int n, double(*pf)(double))
{
	double sum,x,dx,eps=1e-4;
	dx=(b-a)/n;
	sum=((*pf)(a)+(*pf)(b))/2;
	for(x=a+dx;x<b;x+=dx)
	{
		sum+=((*pf)(x));
	}
	sum*=dx;
	return sum;
}
double integralaDr(double a, double b, unsigned int n,double (*pf)(double))
{return 0;}
double integralaSm(double a, double b, unsigned int n,double (*pf)(double))
{return 0;}
