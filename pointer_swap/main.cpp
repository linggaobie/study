#include <stdio.h>

void swap(int* p1, int* p2)
{
	int t = *p1;
	*p1 = *p2;
	*p2 = t;
}

void swapp(int** p1, int** p2)
{
	int* t = *p1;
	*p1 = *p2;
	*p2 = t;
}

int main()
{
	int a = 10, b = 20;
	int* pA = &a;
	int* pB = &b;

	printf("%d, %d, %p, %p\n", a, b, pA, pB);

	swap(&a, &b); // swap(pA, pB);
	printf("%d, %d, %p, %p\n", a, b, pA, pB);
	a = 10;
	b = 20;

	swapp(&pA, &pB);
	printf("%d, %d, %p, %p\n", a, b, pA, pB);

	return 0;
}