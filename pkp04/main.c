#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

union Student{
    unsigned int rollNo : 10;
    unsigned int gender : 6;
};

int main()
{
    union Student student={
        15
    };
    printf("%d", isdigit('3'));
    return 0;
}
