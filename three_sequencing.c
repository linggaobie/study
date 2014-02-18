#include <stdio.h>
void swap(int*a,int*b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
void sort3(int*a,int*b,int*c)
{
	if(*a>*b) swap(a,b);
	if(*a>*c) swap(a,c);
	if(*b>*c) swap(b,c);
}
int main()
{
	for(;;)
	{
		int a,b,c;
		scanf("%d,%d,%d",&a,&b,&c);
		sort3(&a,&b,&c);
		printf("%d,%d,%d\n",a,b,c);	
	}
	return 0;       
}

4,1,5  145 145 
321 231 132 123