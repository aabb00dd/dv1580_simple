#include <stdio.h>
#include <stdlib.h>

int is_number(const char *str) {
    while (*str) 
    {
        if (!isdigit(*str)) return 0;
        str++;
    }
    
    return 1;
}

int main(int argc, char *argv[])
{
    if (!is_number(argv[1]) || !is_number(argv[2])) 
    {
    printf("-ERROR-");
    return 1;
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    int sum = num1 + num2;

    printf("%d\n", sum);

  return 0;
}
