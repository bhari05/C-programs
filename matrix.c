#include <stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],n,m,p,q,i,j,k;
	printf("enter the size of matrix A :");
	scanf("%d%d",&m,&n);
	printf("enter the size of matrix B c:");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("the multiplication is not possible");
	}
	else
	{
		printf("enter the elements of matrix A\n");
		for(m=0;m<3;m++)
		{
			for(n=0;n<3;n++)
			{
				scanf("%d",&a[m][n]);
			}
			printf("\n");
		}		
		printf("enter the elements of matrix B\n");
		for(p=0;p<3;p++)
		{
			for(q=0;q<3;q++)
			{
				scanf("%d",&b[p][q]);
			}
			printf("\n");
		}	
		for(m=0;m<3;m++)
		{
			for(n=0;n<3;n++)
			{
				printf("%d\t",a[m][n]);
			}
			printf("\n");
		}
		printf("\n");		
		for(p=0;p<3;p++)
		{
			for(q=0;q<3;q++)
			{
				printf("%d\t",b[p][q]);
			}
			printf("\n");
		}
		for(i=0;m<3;m++)
		{
			for(j=0;q<3;q++)
			{
				c[i][j]=0;
				for(k=0;k<3;k++)
				{
					c[i][j]=c[i][j]+(a[m][k]*b[k][q]);
				}
			}
			printf("\n");
		}
		printf("the matrix multiplicatio is :\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d",c[i][j]);
			}		
		}
	}
	return 0;
}	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
