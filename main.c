#include <stdio.h>
 
int main()
{
    float area, r, h;
    printf("EnterR : ");
    scanf("%f", &r);
    printf("EnterH : ");
    scanf("%f", &h);    
    area = (2*3.14*r)*h+2*(3.14*r*r) ;
    printf("Area is %f ", area);
    return 0;
}