#include<stdio.h> ////ddddd
#include<math.h>
#include<iostream>
double bigger(double ,double);
double smaller(double,double);
int main ()

{
	int a;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		double x1,y1,r1,x2,y2,r2;
		double dsq;
		scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&r1,&x2,&y2,&r2);
		dsq = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

		if(x1==x2&&y1==y2)
		{
			if(r1==r2)
				printf("-1\n");
			else
				printf("0\n");
		}
		else{
			if(dsq + smaller(r1,r2)<=bigger(r1,r2))
			{
				if(dsq + smaller(r1,r2)==bigger(r1,r2))
				{
					printf("1\n");
				}
				else
				{
					printf("0\n");
				}
			}
			else
			{
				if(dsq>=r1+r2)
				{
					if(dsq==r1+r2)
						printf("1\n");
					else
						printf("0\n");
				}
				else
					printf("2\n");
			}
		}
	}
}



double bigger(double a,double b)
{
	if(a>b)
		return a;
	else
		return b;
}
double smaller(double a, double b)
{
	if(a<b)
		return a;
	else
		return b;
}








