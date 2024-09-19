#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 3) 
    {
        printf("-ERROR-\n");
        return 1;
    }

    char *endptr;
    double num1 = strtod(argv[1], &endptr);
    if (*endptr != '\0') 
    {
        printf("-ERROR-\n");
        return 1;
    }

    double num2 = strtod(argv[2], &endptr);
    if (*endptr != '\0') 
    {
        printf("-ERROR-\n");
        return 1;
    }

    double result = num1 * num2;
    printf("%0.1f\n", result);

    return 0;
}
