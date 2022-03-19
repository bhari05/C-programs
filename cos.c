#include <stdio.h>
#include <math.h>

#define PI 3.142857

int main()
{
	int i;
	float x,nume,deno,sum,term,degree;
	
	printf("enter the degree\n");
	scanf("%f",&degree);
	
	x=degree*(PI/180.0);
	
	term=1;
	i=0;
	nume=1;
	deno=1.0;
	sum=0;
	
	do
	{
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*(i)*(i-1);
		term=nume/deno;
	}
	while(fabs(term)>=0.00001);
	
	printf("computed value of cos(%f) = %f\n",degree,sum);
	printf("using built-in function, cos(%f) = %f\n",degree,cos(x));
	return 0;
}  
