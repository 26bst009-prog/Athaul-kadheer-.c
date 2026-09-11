#include <stdio.h>

/* NANR */
void fun1()
{
    printf("Hello from NANR\n");
}

/* ANR */
void fun2(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

/* NAWR */
int fun3()
{
    return 20 + 30;
}

/* AWR */
int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    fun1();

    fun2(10, 20);

    result = fun3();
    printf("NAWR Result = %d\n", result);

    result = fun4(30, 40);
    printf("AWR Result = %d\n", result);

    return 0;
}
