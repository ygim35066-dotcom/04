#include <stdio.h>

int main(void)
{
    int a, b;
    
    printf("Input two integers: ");
    scanf("%i %i", &a, &b);
    
    printf("+ result is %d\n", a + b);
    printf("- result is %d\n", a - b);
    printf("* result is %d\n", a * b);
    printf("/ result is %d\n", a / b);
    printf("%% result is %d\n", a % b); 
    
    return 0;
}