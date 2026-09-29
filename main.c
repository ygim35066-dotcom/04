#include <stdio.h>

int main(void)
{
    int total_sec, min, sec;
    
    printf("input the second: ");
    scanf("%i", &total_sec);
    
    min = total_sec / 60;   
    sec = total_sec % 60;   
    
    printf("the time is %d:%d\n", min, sec);
    
    return 0;
}