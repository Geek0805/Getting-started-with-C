/*to calculate simple interest*/

#include <stdio.h>

int main(int argc, const char * argv[]) 
{
    int p, n;
    float r, si;
    
    printf("Enter the values of p,n,r");
    scanf("%d %d %f", &p, &n, &r);
    
    si = p*n*r/100;
    
    printf("%f", si);
    
    return 0;
}