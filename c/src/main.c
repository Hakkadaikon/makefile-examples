#include <stdio.h>
#include "structures/example/example.h"

int main(void)
{
    Example example;
    Example_Init(&example);
    example.exec();
    return 0;
}
