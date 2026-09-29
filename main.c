#include <stdio.h>

int main(void)
{
    int year, is_leap;
    
    printf("Input the year: ");
    scanf("%i", &year);
    
    is_leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    
    printf("is the year %d the leap year?: %d\n", year, is_leap);
    
    return 0;
}