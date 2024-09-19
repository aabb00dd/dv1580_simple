#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Check if the number of arguments is correct
    if (argc != 3) {
        fprintf(stderr, "-ERROR-\n");
        return 1;
    }

    // Convert arguments to integers
    char *endptr;
    int num1 = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0') {
        fprintf(stderr, "-ERROR-\n");
        return 1;
    }
    int num2 = strtol(argv[2], &endptr, 10);
    if (*endptr != '\0') {
        fprintf(stderr, "-ERROR-\n");
        return 1;
    }

    // Calculate the sum
    int sum = num1 + num2;

    // Print the result
    printf("%d\n", sum);

    return 0;
}
