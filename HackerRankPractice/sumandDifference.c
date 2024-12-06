#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum; 
    float c, d, difference;
	
    scanf("%d %d", &a, &b);
    scanf ("%f %f", &c, &d );
    
    
    sum = a+b;
    difference = c-d;
    
    printf("%d %d\n", sum, a-b);
    printf("%.1f %.1f\n", c+d, difference);
    
    return 0;
}