#include <stdio.h>
#include <string.h>

double divisao(double x, double y);

int main(int argc, char const *argv[])
{
    printf("%s\t%d\n", argv[0], argc);

    printf("%lf\n", divisao(9, 4));

    
    return 0;
}

double divisao(double x, double y)
{
    return x/y;
}

