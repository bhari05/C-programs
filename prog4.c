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
	
	i=1;
	nume=x;
	deno=1.0;
	sum=0;
	
	do
	{
		term=nume/deno;
		sum=sum+term;
		i=i+2;
		nume=-nume*x*x;
		deno=deno*(i)*(i-1);
		printf("term=%f\n",term);
	}
	while(fabs(term)>=0.00001);
	
	printf("computed value of sin(%f) using Taylor series = %f\n",degree,sum);
	printf("using built-in function, sin(%f) = %f\n",degree,sin(x));
	return 0;
}  

