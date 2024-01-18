/*to calculate gross salary*/
#include <stdio.h>

int main(int argc, const char * argv[])
{
int bs ;
float da, hra, gs ;

printf("Enter basic salary") ;
scanf("%d", &bs) ;

printf("Enter Dearly allowance and house rent allowance :") ;
scanf("%f %f", &da, &hra) ;

hra = bs*20/100 ;
da = bs*40/100 ;
gs= bs+da+hra ;

printf("Gross salary is : Rs. %f", gs) ;
return 0;
}

