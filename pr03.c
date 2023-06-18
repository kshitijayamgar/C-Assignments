/*
C - Static Variables

In C programming language static is a reserved word controlling both lifetime (as a static variable) and visibility (depending on linkage).

You can declare variables (or functions) at the top level (that is, not inside a function) to be static; such variables are visible (global) to the current source file (but not other source files). This gives an unfortunate double meaning to static; this second meaning is known as static linkage. Two functions or variables having static linkage in separate files are entirely separate; neither is visible outside the file in which it is declared.

Following program uses a function called test() to sum integers. The function uses a static variable to store the cumulative sum.
*/
#include <stdio.h>
void test()
{
    static int stat_var = 10;
    int x = 100;
    stat_var += 50;
        x += 50;
        printf("x = %d, stat_var = %d\n", x, stat_var);
}
int main()
{
   int i;
    for (i = 0; i < 5; ++i)
        test();
}

