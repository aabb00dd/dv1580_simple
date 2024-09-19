#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    
    if(!isdigit(argv[1]) || !isdigit(argv[2]))
    {
        Print("ERROR")
        break    
    }
    
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    int sum = num1 + num2;

    printf("%d\n", sum);

  return 0;
}
