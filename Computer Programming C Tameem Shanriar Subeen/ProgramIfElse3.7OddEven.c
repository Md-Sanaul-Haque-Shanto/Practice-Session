#include<stdio.h>
main()
{
int n,remainder;
printf("Enter A Number:");
scanf("%d",&n);
remainder=n%2;
if(remainder==0){
printf("%d Is Even\n",n);
}
else{printf("%d Is Odd\n",n);}
return 0;
}
