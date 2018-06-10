#include <stdio.h>
#define PI 3.141592654
int main()
{
    double r,h,v,a;
    printf("Enter Radius And Height=");
    scanf("%lf%lf",&r,&h);
    v=PI*r*r*h;
    a=2*PI*r*r+2*PI*r*h;
    printf("Volume Is=%0.3lf\n",v);
    printf("Surface Area Is=%0.3lf",a);
    return 0;

}

