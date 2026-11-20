#include <stdio.h>

int main()
{
    int x = 0, y = 0, s1 = 1, s2 = 0; 

    y += s1; x += (1 - s1);             
    int x1 = x, y1 = y;                 

    y += s2; x += (1 - s2);             
    printf("After sensors: (%d, %d)\n", x, y);

    x = 3; y = 4;                       
    printf("At graph point: (%d, %d)\n", x, y);

    x = x1; y = y1; printf("Back: (%d, %d)\n", x, y); 
    x = 0;  y = 0;  printf("Exit: (%d, %d)\n", x, y); 
    return 0;
}
