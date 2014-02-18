#include <stdio.h>
int max(int x,int y)
{
	int z;
	if(x>y) z=x;
	else z=y;	
	return z;
}
int main( )
{
	int a,b,c;
	for(;;)
	{
		scanf("%d,%d",&a,&b);
		c=max(a,b);
		printf("较大值=%d\n",c);
	}
	return c;
}