#include <stdio.h>
#include "functii.h"
#include <math.h>

int main()
{	
	struct MENU_ITEM meniu[]={
		{"Calculul integralei prin met. trapezelor", integralaTr},
		{"Calculul integr. prin met. dreptunghiurilor", integralaDr},
		{"Calculul integr. prin met. Simpson", integralaSm}
	};
	int opt=menu(meniu,3,"Alegeti una din urm. opt.:");	
	if(opt==0)
	{
		return 0;
	}
	double a,b;
	unsigned int n;
	printf("Introd. lim de integrare: ");
	scanf("%lf%lf",&a,&b);
	printf("Introd. nr de div.: ");
	scanf("%u",&n);
	double i=0;
	if(opt==1)
		i=integralaTr(a,b,n,f);
	if(opt==2)
		i=integralaDr(a,b,n,f);
	if(opt==3)
		i=integralaSm(a,b,n,f);
	printf("integrala din f(x)= %lf\n",i);
	return 0;
}
