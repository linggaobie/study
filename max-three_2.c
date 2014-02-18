#include <stdio.h>
int max(x,y);
{
	if(x>y) return x;
	else return y;
}
int main( )
{
	int a,b,c;	
	for(;;)
	{
		scanf("%d,%d,%d",&a,&b,&c);
		int k=max(a,b);
		int f=max(c,k);
		printf ("最大值=%\n",f);
	}
	return f;	
}