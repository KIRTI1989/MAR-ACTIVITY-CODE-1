#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("ENTER 1st INTEGER :");
	scanf("%d",&a);
	printf("ENTER 2nd INTEGER :");
	scanf("%d",&b);
	printf("ENTER 3rd INTEGER :");
	scanf("%d",&c);
	if(a>b && b>c)
	{
		printf("%d",a );
	}
	else if(b>a && a>c)
	{
	    printf("%d",b );	
	}
	else
	{ 
	    printf("%d",c);
	} 
	printf(" \n \n the given no. is greater");
	return 0;
}
