#include<stdio.h>
int main()
{
	int n,c,i;
	printf("\n Finding prime num");
	scanf("%d",&n);
	c=0;
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("\n Enter the num: %d");
			c++;
		}   i++;
		    
	if(c==2)
	{
	   printf("\n the given num is prime");	
	}	
	else
	{
		printf("\n the given num is not prime")
	}	
    }
	
		
		
		
		return ;
	
	
}
