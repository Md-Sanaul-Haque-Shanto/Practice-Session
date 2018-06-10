#include<stdio.h>
int add(double num1,double num2)
{
    double sum=num1+num2;
    return sum;
}
int main()
{
    double n,a,b,c;
    printf("Enter The Value Of a=b=");
    scanf("%lf\n",&n);
    a=b=n;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;

}
