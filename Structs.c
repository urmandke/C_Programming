#include <stdio.h>

struct rectangle
{
	int length;
	int width;
};

int main()
{

	struct rectangle myRectangle = {5, 10};
	printf ("Length: %d. Width: %d\n",myRectangle.length, myRectangle.width);


	return 0;
}

