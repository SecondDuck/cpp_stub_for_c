#include "stdio.h"
#include "stub.h"
#include "stdlib.h"

void func()
{
    printf("This is original func!\n");
    return;
}

void func_replace()
{
    printf("This is replaced func!\n");
    return;
}

void * my_malloc(size_t size)
{
    printf("You want a place with %d bytes.\n", size);
    return NULL;
}

int main()
{
    Stub stub;
    stub.set(func, func_replace);
    func();
    stub.reset(func);
    func();
    stub.set(malloc, my_malloc);
    int * t = (int*)malloc(4);
    printf("%p\n", t);
    stub.reset(malloc);
    t = (int*)malloc(4);
    printf("%p\n", t);
    return 0;
}
