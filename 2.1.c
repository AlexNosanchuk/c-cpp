/* task 2.1 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //cosh

int main(){
    double x,y;
    printf("x=");
    scanf("%lf",&x);
    
    y = cosh(x); //y = ch(x) cosx = coshx, sinx = sinhx
    printf("y=ch(%lf)=%lf",x,y);
    
}
