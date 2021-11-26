/* hcf of two num */
#include<stdio.h>
int main()
{
	int a,b,H;
	printf("enter the two num");
	scanf("%d %d",&a,&b);
	for(H=a<b?a:b;H>=1;H--)
	    if(a%H==0 && b%H==0)
	        break;
	printf("the hcf is %d",H);
}
