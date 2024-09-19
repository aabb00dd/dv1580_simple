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
    int num1 = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0') 
    {
        printf("-ERROR-\n");
        return 1;
    }
    
    int num2 = strtol(argv[2], &endptr, 10);
    if (*endptr != '\0') 
    {
        printf("-ERROR-\n");
        return 1;
    }

    int sum = num1 / num2;
    printf("%d\n", sum);

    return 0;
}
