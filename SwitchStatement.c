#include <stdio.h>

int main()
{
    int slices = 3;

    switch (slices)
    {
        case 1:
            printf("Well 1 better than 2\n");
            break;
        case 2:
            printf("Well 2 better than 3\n");
            break;
        case 3:
            printf("Well 3 better than 4\n");
            break;
        case 4:
            printf("4 is too much\n");
            break;
        default:
            printf("you really should not eat pizza\n");
            break;
    }
    return 0;
}
