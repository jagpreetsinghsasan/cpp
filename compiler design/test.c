#include<stdio.h>

void printname()
{
	printf("Jagpreet");
}

void printsum(int x,int y)
{
	int z = x*y;
	printf(" %d \n ",z);
}

int main()
{
	printname();
	int x = 10,y = 20;
	printsum(x,y);
	return 0;
}