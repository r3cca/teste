#include <stdio.h>

int add2y(int x, int y)
	return x+2*y;

int sub2y(int x, int y)
	return x-2*y;

void main()
{
	int x, y;
	printf("x, y = ? ");
	scanf("%d%d",&x,&y);
	printf("\nx + y = %d",add(x,y));
	printf("\nx - y = %d",sub(x,y));	
}
