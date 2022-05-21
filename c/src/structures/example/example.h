// Example structure.
//
#ifndef _EXAMPLE_
#define _EXAMPLE_

#include <stdio.h>

typedef struct
{
   void (*exec)(void);
} Example;

static void exec_local()
{
    puts("Huga.");
}

int Example_Init(Example* example)
{
    if (example == NULL)
    {
        return 1;
    }

    example->exec = exec_local;
    return 0;
}

#endif
