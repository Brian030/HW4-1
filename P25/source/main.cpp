#include <stdio.h>
#include <stdlib.h>

int addbyond(int &xref);

void main()
{
	int x = 100;
	int y = addbyond(x);
	printf("x=%d\n", x);
	system("pause");
}

int addbyond(int &xref)
{
	xref++;
	printf("xref=%d\n", xref);
	return xref;
}