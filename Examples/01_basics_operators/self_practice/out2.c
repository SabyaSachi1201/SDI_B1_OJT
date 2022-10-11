#include <stdio.h>
void main()
{   
	int x=10;
	x+=(x++)+(++x)+x;
	printf("%d",x);
}
//prints value of x=45 according to Turbo C compiler and x=46, according to GCC Linux compiler.