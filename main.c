#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double divisao(double x, double y);

int main(int argc, char const *argv[])
{
    printf("%s\t%d\n", argv[0], argc);

    double numbers[argc];

    for(int i = 0; i < argc; i++){
        numbers[i-1] = atof(argv[i]);
    }

    printf("%lf\n", divisao(numbers[0], numbers[1]));

    
    return 0;
}

double divisao(double x, double y)
{
    return x/y;
}

