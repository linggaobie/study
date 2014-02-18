#include <stdio.h>
int max(int x,int y,int z)
{
	int a,b;
	if(x>y) a=x;
	else a=y;
	if(y>z) b=y;
	else b=z;	
	if(a>=b) return a;
	else return b;
}
int main( )
{
	int m,n,l,f;
	for(;;)
	{
		scanf("%d,%d,%d",&m,&n,&l);
		f=max(m,n,l);
		printf("最大值=%d\n",f);
	}
	return f;
}