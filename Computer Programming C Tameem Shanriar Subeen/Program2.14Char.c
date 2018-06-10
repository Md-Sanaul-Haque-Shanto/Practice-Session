#include<stdio.h>
main()
{
int num1,num2,value;
char sign;
scanf("%d %c %d",&num1,&sign,&num2);
value=num1+num2;
sign='+';
printf("%d %c %d=%d\n",num1,sign,num2,value);
value=num1-num2;
sign='-';
printf("%d %c %d=%d\n",num1,sign,num2,value);
value=num1*num2;
sign='*';
printf("%d %c %d=%d\n",num1,sign,num2,value);
value=num1/num2;
sign='/';
printf("%d %c %d=%d\n",num1,sign,num2,value);
value=num1%num2;
sign='%';
printf("%d %c %d=%d\n",num1,sign,num2,value);
return 0;

}
