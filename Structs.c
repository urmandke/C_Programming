#include <stdio.h>

typedef struct
{
	int length;
	int width;
}rectangle;

typedef struct
{
	int x;
	int y;
}position;



int main()
{

	rectangle myRectangle = {5, 10};
	printf ("Length: %d. Width: %d\n",myRectangle.length, myRectangle.width);


	return 0;
}

